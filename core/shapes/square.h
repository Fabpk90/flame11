#ifndef SQUARE_H
#define SQUARE_H

#include "../flame.h"
#include "point.h"

typedef struct square_s
{

    // 0 == down left, 1 == down right ...
    vector2i_t points[4];

    vector2i_t center;

    //TODO
    //vector2i_t size;  default size -> 32pixels

}square_t;


square_t * createSquare(int xCenter, int yCenter);
void drawSquare(flame_obj_t *fo, square_t * square);
void updateSquarePosition(square_t * square);

void freeSquare(square_t * square);

#endif