#include <stdlib.h>

#include "square.h"

square_t * createSquare(int xCenter, int yCenter)
{
    square_t *square = malloc(sizeof(square_t));

    square->center = createVector2i(xCenter, yCenter);

    updateSquarePosition(square);

    return square;
}

void updateSquarePosition(square_t * square)
{
    square->points[0].y = square->center.y + 16;
    square->points[0].x = square->center.x - 16;

    square->points[1].y = square->center.y + 16;
    square->points[1].x = square->center.x + 16;

    square->points[2].y = square->center.y - 16;
    square->points[2].x = square->center.x + 16;
    
    square->points[3].y = square->center.y - 16;
    square->points[3].x = square->center.x - 16;
}

void drawSquare(flame_obj_t *fo, square_t * square)
{
    flame_draw_line(fo, square->points[0].x, square->points[0].y, 
    square->points[1].x, square->points[1].y);

    flame_draw_line(fo, square->points[1].x, square->points[1].y, 
    square->points[2].x, square->points[2].y);

    flame_draw_line(fo, square->points[2].x, square->points[2].y, 
    square->points[3].x, square->points[3].y);

    flame_draw_line(fo, square->points[3].x, square->points[3].y, 
    square->points[0].x, square->points[0].y);
}

void freeSquare(square_t * square)
{
    free(square);
}