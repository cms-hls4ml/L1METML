//Numpy array shape [6, 2]
//Min -2.672395467758
//Max 2.548557043076
//Number of zeros 0

#ifndef E3_H_
#define E3_H_

namespace hls4ml_l1metml_v1 {

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
embedding0_embeddings_t e3[12];
#else
embedding0_embeddings_t e3[12] = {1.620906114578247, -0.427226632833481, -2.672395467758179, -0.035970680415630, 2.548557043075562, 0.323681503534317, 1.538867950439453, 1.997532844543457, -0.704283535480499, 0.116950742900372, -0.906534552574158, 0.974053442478180};
#endif

} // namespace hls4ml_l1metml_v1 

#endif
