#ifndef MANUAL
#define MANUAL
#include "telCoColorCoder.h"

void getManualFromCode(int pairNumber)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Pair details : " << colorPair.ToString() << std::endl;
}

#endif
