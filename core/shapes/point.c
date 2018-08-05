#include <stdlib.h>

#include "point.h"

point_t * createPoint(int x, int y, XColor color)
{
    point_t *point = malloc(sizeof(point_t));

    point->position = createVector2i(x, y);
    point->color = color;

    return point;
}