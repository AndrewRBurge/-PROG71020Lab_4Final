#include <iostream>
#include "globals.h"
#include "shape.h"
#include "car.h"


float getTotalArea(shape** shapes, int sizeOfArray) {
    float total = 0;

    for (int i = 0; i < sizeOfArray; i++) {
        total += shapes[i]->getArea();
    }

    return total;
}
