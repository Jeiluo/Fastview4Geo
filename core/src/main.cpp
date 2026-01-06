#include "GdalCommon.h"
#include <iostream>

int main() 
{
    GdalInitializer gdal;
    gdal.init();
    std::cout << "GDAL Initialized successfully." << std::endl;
    return 0;
}