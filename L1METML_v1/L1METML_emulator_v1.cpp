#include "NN/L1METML_v1.h"
#include "emulator.h"
#include <any>
#include <array>

/*
L1METML_v1.cpp
*/
class L1METML_emulator_v1 : public hls4mlEmulator::Model {

private:
    input5_t _input_cont[N_INPUT_1_5*N_INPUT_2_5];
    input19_t _input_pxpy[N_INPUT_1_19*N_INPUT_2_19];
    input_t _input_cat0[N_INPUT_1_1];
    input2_t _input_cat1[N_INPUT_1_2];
    result_t _result[N_FILT_21];

public: 
  virtual void prepare_input(std::any input) {
    input5_t *input_p = std::any_cast<input5_t*>(input);
    
    // copy inputs
    for (int i = 0; i < N_INPUT_1_5*N_INPUT_2_5; i++) {      
      _input_cont[i] = input_p[i];
    }
    for (int i = 0; i < N_INPUT_1_19*N_INPUT_2_19; i++) {
      _input_pxpy[i] = input_p[N_INPUT_1_5*N_INPUT_2_5+i];
    }
    for (int i = 0; i < N_INPUT_1_1; i++) {
      _input_cat0[i] = input_p[N_INPUT_1_5*N_INPUT_2_5+N_INPUT_1_19*N_INPUT_2_19+i];
    }
    for (int i = 0; i < N_INPUT_1_2; i++) {
      _input_cat1[i] = input_p[N_INPUT_1_5*N_INPUT_2_5+N_INPUT_1_19*N_INPUT_2_19+N_INPUT_1_1+i];
    }
  }

  virtual void predict() {
    // call the NN HLS function to make predictions
    L1METML_v1(_input_cont, _input_pxpy, _input_cat0, _input_cat1, _result);
  }
  
  virtual void read_result(std::any result) {
    // copy result
    result_t *result_p = std::any_cast<result_t*>(result);
    for (int i = 0; i < N_FILT_21; i++) {
      result_p[i] = _result[i];
    }
  }
  
};

// Create a new model object
extern "C" hls4mlEmulator::Model* create_model() {
    return new L1METML_emulator_v1;
}

// Destroy the model object
extern "C" void destroy_model(hls4mlEmulator::Model* m) {
    delete m;
}
