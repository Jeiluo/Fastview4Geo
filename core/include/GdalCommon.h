//Jiahao Zhou, Haojun Tang
//2025-2026
//git@github.com:Jeiluo/Fastview4Geo.git

//GDAL 初始化类 GdalInitializer,提供静态初始化方法

#ifndef GDALCOMMON_H
#define GDALCOMMON_H

#include "gdal_priv.h"
#include "cpl_conv.h"
#include "ogr_spatialref.h"

// GDAL 初始化
class GdalInitializer {
public:
    static void init();
};

#endif // GDALCOMMON_H