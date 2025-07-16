#include <iostream>
#include <cmath>
#include "globals.h"
#include "shape.h"
#include "car.h"

using namespace std;

// PROG71020Lab_4 Rami_Andrew_Emmanuel

int main() {
    //create , name, initilize , draw and drive Mazda
    mazda mazda;
    mazda.changeName("Mazda");
    mazda.prepCar();
    mazda.Draw();
    mazda.isDriving();

    //create , name, initilize , draw and drive BMW
    BMW bmw;
    bmw.changeName("Bmw");
    bmw.prepCar();
    bmw.Draw();
    bmw.isDriving();
    
    //set up an array of shapes
    shape* Shape[3] = { 0 };
    
    //initlize shapes pointers in an array
    Shape[0] = new Rectangle(2,5);
    Shape[1] = new Rectangle(3,4);
    Shape[2] = new Circle(5);

    //draw the shapes in the array
    Shape[0]->Draw();
    Shape[1]->Draw();
    Shape[2]->Draw();

    // get and print the total area of the array
    int sizeofArray = sizeof(Shape) / sizeof(Shape[0]);
    cout << getTotalArea(Shape, sizeofArray) << endl;

    return 0;
}