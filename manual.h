#ifndef MANUAL
#define MANUAL
#include "telCoColorCoder.h"
using namespace TelCoColorCoder;
std::string getManualFromCode(int pairNumber)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Pair details : " << colorPair.ToString() << std::endl;
    return colorPair.ToString();
}

std::string getManual(){
    std::string manual = "-------> MANUAL <--------\n";
    for(int major = WHITE; major <= VIOLET; major++){
        for(int minor = BLUE; minor <= SLATE; minor++){
            int pair = (major * numberOfMinorColors) + minor + 1;
            manual += getManualFromCode(pair);
            manual += "\n";
        }
    }
    return manual;
}
#endif
