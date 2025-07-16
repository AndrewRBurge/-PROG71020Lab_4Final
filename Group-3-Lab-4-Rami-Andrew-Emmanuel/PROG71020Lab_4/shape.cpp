#include <iostream>
#include "globals.h"
#include "shape.h"
#include "car.h"

// using the get Area in the parent class we can then just add up all the shapes in the array
float getTotalArea(shape** shapes, int sizeOfArray) {
    float total = 0;

    for (int i = 0; i < sizeOfArray; i++) {
        total += shapes[i]->getArea();
    }

    return total;
}
