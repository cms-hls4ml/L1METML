//Numpy array shape [4, 2]
//Min -1.666811108589
//Max 1.295734167099
//Number of zeros 0

#ifndef E4_H_
#define E4_H_

namespace hls4ml_l1metml_v1 {

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
embedding1_embeddings_t e4[8];
#else
embedding1_embeddings_t e4[8] = {1.295734167098999, 0.254000633955002, -1.661195635795593, 0.048672962933779, -0.138032227754593, -0.875923097133636, -1.666811108589172, 0.035932607948780};
#endif

} // namespace hls4ml_l1metml_v1 

#endif
