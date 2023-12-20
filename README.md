# L1METML

<p align="center">
<img src=https://github.com/cms-hls4ml/L1METML/assets/4932543/d467b9ec-a82a-4733-914e-94eac1aa9430 width=300/>
</p>

- Model training and conversion code: https://github.com/ucsd-hep-ex/L1METML
- Emulator tutorial: https://gitlab.cern.ch/fastmachinelearning/cms_mlatl1t_tutorial/-/tree/master/part3

## v1
- Based on floating point Keras model: https://github.com/ucsd-hep-ex/L1METML/blob/a5f0df368fe82489f469baa5a778de0b17ffab8e/models/baseline_DeepMET/trained_DeepMET.h5
- Conversion script: https://github.com/ucsd-hep-ex/L1METML/blob/a5f0df368fe82489f469baa5a778de0b17ffab8e/convert_full_model.py
- hls4ml version/commit used: https://github.com/jmduarte/hls4ml/tree/eeb804b6b27e4b10c0c9e3fa7a10075e53449989
- Model:
![model_hls4ml](https://github.com/cms-hls4ml/L1METML/assets/4932543/22074cbb-c37f-49eb-920c-c4389b117b3a)
- Expected performance:
![profiling_MET](https://github.com/cms-hls4ml/L1METML/assets/4932543/20eea0bf-269b-497d-935b-16342982d71c)
![response_MET](https://github.com/cms-hls4ml/L1METML/assets/4932543/c32fb2d8-f822-45df-a4c7-4f8319fbcb93)
