#ifndef MANUAL
#define MANUAL

void getManualFromCode(int pairNumber)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Pair details : " << colorPair.ToString() << std::endl;
}

#endif
