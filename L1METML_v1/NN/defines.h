#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

namespace hls4ml_l1metml_v1 {
// hls-fpga-machine-learning insert numbers
static const int N_INPUT_1_1 = 100;
static const int N_INPUT_1_2 = 100;
static const int N_LAYER_1_3 = 100;
static const int N_LAYER_2_3 = 2;
static const int N_LAYER_1_4 = 100;
static const int N_LAYER_2_4 = 2;
static const int N_INPUT_1_5 = 100;
static const int N_INPUT_2_5 = 4;
static const int OUT_CONCAT_0_6 = 100;
static const int OUT_CONCAT_1_6 = 4;
static const int OUT_CONCAT_0_7 = 100;
static const int OUT_CONCAT_1_7 = 8;
static const int N_OUTPUTS_22 = 100;
static const int N_FILT_22 = 12;
static const int N_LAYER_1_8 = 100;
static const int N_LAYER_2_8 = 12;
static const int N_OUTPUTS_23 = 100;
static const int N_FILT_23 = 36;
static const int N_LAYER_1_12 = 100;
static const int N_LAYER_2_12 = 36;
static const int N_OUTPUTS_24 = 100;
static const int N_FILT_24 = 1;
static const int N_INPUT_1_19 = 100;
static const int N_INPUT_2_19 = 2;
static const int N_FILT_21 = 2;

// hls-fpga-machine-learning insert layer-precision
typedef ap_uint<4> input_t;
typedef ap_uint<4> input2_t;
typedef ap_fixed<32,16> layer3_t;
typedef ap_fixed<32,16> embedding0_embeddings_t;
typedef ap_fixed<32,16> layer4_t;
typedef ap_fixed<32,16> embedding1_embeddings_t;
typedef ap_fixed<32,16> input5_t;
typedef ap_fixed<32,16> layer6_t;
typedef ap_fixed<32,16> layer7_t;
typedef ap_fixed<32,16> model_default_t;
typedef ap_fixed<32,16> layer22_t;
typedef ap_fixed<32,16> dense_weight_t;
typedef ap_fixed<32,16> dense_bias_t;
typedef ap_fixed<32,16> layer11_t;
typedef ap_fixed<18,8> activation_table_t;
typedef ap_fixed<32,16> layer23_t;
typedef ap_fixed<32,16> dense_1_weight_t;
typedef ap_fixed<32,16> dense_1_bias_t;
typedef ap_fixed<32,16> layer15_t;
typedef ap_fixed<18,8> activation_1_table_t;
typedef ap_fixed<32,16> layer24_t;
typedef ap_fixed<32,16> met_weight_weight_t;
typedef ap_fixed<32,16> met_weight_bias_t;
typedef ap_fixed<32,16> input19_t;
typedef ap_fixed<32,16> layer20_t;
typedef ap_fixed<32,16> result_t;
} // namespace hls4ml_l1metml1_v1
#endif
