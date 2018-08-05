#ifndef POINT_h
#define POINT_h

#include <X11/Xlib.h>

#include "../../utils/vector2i.h"

typedef struct point_s
{
    vector2i_t position;
    XColor color;
    
}point_t;

point_t * createPoint(int x, int y, XColor color);

#endif