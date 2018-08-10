#ifndef POINT_h
#define POINT_h

#include <X11/Xlib.h>

#include "../flame.h"

#include "../../utils/vector2i.h"

typedef struct point_s
{
    vector2i_t position;
    int r;
    int g;
    int b;
    
}point_t;

point_t * createPoint(int x, int y, int r, int g, int b);
void drawPoint(flame_obj_t *fo, point_t *point);

void freePoint(point_t *point);

#endif