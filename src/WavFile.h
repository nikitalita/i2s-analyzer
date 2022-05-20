#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <vector>

class WavFile{
    protected:
    int8_t mInputBPS;
    int8_t mOutputBPS;
    int32_t mSampleRate;
    int8_t mFrameCount;
    
    int32_t mFrameCount;
    bool mIsSigned;
    std::vector<uint8_t> data;
    public:
    WavFile(const char* filename,
            int32_t SampleRate,
            int32_t FrameCount,
            int8_t NumChannels,
            int8_t BitsPerSample,
            bool IsSigned){
                
            }
    
    
};