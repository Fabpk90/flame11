#include <stdlib.h>

#include "point.h"

point_t * createPoint(int x, int y, int r, int g, int b)
{
    point_t *point = malloc(sizeof(point_t));

    point->position = createVector2i(x, y);

    point->r = r;
    point->g = g;
    point->b = b;

    return point;
}

void drawPoint(flame_obj_t *fo, point_t *point)
{
    flame_set_color(fo, point->r, point->g, point->b);
    flame_draw_point(fo, point->position.x, point->position.y);
}

void freePoint(point_t *point)
{
    free(point);
}