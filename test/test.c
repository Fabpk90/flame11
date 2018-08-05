#include <stdlib.h>

#include "../core/flame.h"
#include "../core/shapes/point.h"

int main(int argc, char const *argv[])
{
    int windowWidth = 600, windowHeight = 400;
    char c;
    int clickX, clickY;
    flame_obj_t *fo = flame_open("Test flame11", windowHeight, windowWidth);

    point_t point;
    while (1)
    {
        c = flame_wait_click(fo, &clickX, &clickY);

        if (c == 1)
        {
            break;
        }
        else if (c == 'q')
            break;
    }

    flame_close(fo);

    /* code */
    return 0;
}
