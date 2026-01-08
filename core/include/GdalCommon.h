//Jiahao Zhou, Haojun Tang
//2025-2026
//git@github.com:Jeiluo/Fastview4Geo.git

//GDAL 初始化类 GdalInitializer,提供静态初始化方法

#ifndef GDALCOMMON_H
#define GDALCOMMON_H

#include "gdal_raster_cpp.h"
#include <iostream>

// GDAL 初始化
class GdalInitializer 
{
public:
    GDALDataset* openTiff(const std::string& path) {
        GDALDataset* ds = (GDALDataset*)GDALOpen(
        path.c_str(),
        GA_ReadOnly     // 只读；写入用 GA_Update
    );

    if (!ds) {
        std::cerr << "Failed to open: " << path << std::endl;
        return nullptr;
    }
    return ds;
    }
};

#endif // GDALCOMMON_H