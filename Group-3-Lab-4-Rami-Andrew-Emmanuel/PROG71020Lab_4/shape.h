#include <iostream>
#include "globals.h"

using namespace std;

class shape : draw {
protected:
    float area;

public:
    shape() : area(0) {}

    virtual void setArea(float Area) {
        area = Area;
    }

    virtual void Draw() {
    }

    float getArea() {
        return area;
   }

};

class Rectangle : public shape {
public:
    Rectangle() : shape() {}

    int height;
    int width;
    int array[MAX][MAX] = { 0 };

    // set up varables 
    Rectangle(int h, int w) {
        height = h;
        width = w;
        area = h * w;

        memset(array, 0, sizeof(array));

        //generate array
        for (int row = 0; row < w; row++) {
            for (int col = 0; col < h; col++) {
                array[col][row] = 1;
            }
        }
    }

    void Draw() {
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                if (array[i][j] == 0) {
                    cout << " ";
                }
                else {
                    cout << "*";
                }
            }
            cout << "\n";
        }
    }
};

class Circle : public shape {

public:
    int radius;
    int array[MAX][MAX] = { 0 };

    Circle(int r) {
        radius = r;

        float rSquared = r * r;
        area = pi * rSquared;

        for (int i = 0; i < MAX; i++)
            for (int j = 0; j < MAX; j++)
                array[i][j] = 0;

        // makes the start poitn always be the center of the array
        int centerX = MAX / 2;
        int centerY = MAX / 2;

        // Fill circle using the equation (x - a)^2 + (y - b)^2 <= r^2 that I found online : https://en.wikipedia.org/wiki/Circle
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                int dx = i - centerY;
                int dy = j - centerX;
                if (dx * dx + dy * dy <= radius * radius) {
                    array[i][j] = 1;
                }
            }
        }

    }

    void Draw() {
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                if (array[i][j] == 0) {
                    cout << " ";
                }
                else {
                    cout << "*";
                }
            }
            cout << "\n";
        }
    }

};


float getTotalArea(shape** shapes, int sizeOfArray);