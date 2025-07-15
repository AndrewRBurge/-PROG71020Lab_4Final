#include <iostream>
#include <cmath>
#include "globals.h"
#include "shape.h"
#include "car.h"

using namespace std;

int main() {

    mazda mazda;
    mazda.changeName("Mazda");
    mazda.prepCar();
    mazda.Draw();
    mazda.isDriving();

    BMW bmw;
    bmw.changeName("Bmw");
    bmw.prepCar();
    bmw.Draw();
    bmw.isDriving();
    
    
    shape* Shape[3] = { 0 };

    Shape[0] = new Rectangle(2,5);
    Shape[1] = new Rectangle(3,4);
    Shape[2] = new Circle(5);

    Shape[0]->Draw();
    Shape[1]->Draw();
    Shape[2]->Draw();


    int sizeofArray = sizeof(Shape) / sizeof(Shape[0]);
    cout << getTotalArea(Shape, sizeofArray) << endl;

    return 0;
}