#include "GdalCommon.h"

int main() 
{
    GdalInitializer gdal;
    gdal.openTiff("F:/Users/21910/Desktop/Remote_sense/w/1.TIF");
    std::cout << "GDAL Initialized successfully." << std::endl;
    return 0;
}