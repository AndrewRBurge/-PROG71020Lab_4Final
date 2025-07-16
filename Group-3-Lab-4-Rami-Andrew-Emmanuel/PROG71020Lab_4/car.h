#include <iostream>
#include "globals.h"

using namespace std;

//car class
class car : public draw {
protected:
	int array[MAX][MAX] = { 0 };
	string carName;
    string brand;

public:
    // constructors
    car() : carName{ "" }, brand{ "None" } {} // Default constructor
    car(string Name, string Brand) : carName{ Name }, brand{ Brand } {};

    //change the name of the car 
	void changeName(string name) {
		carName = name;
	}
    //initlizes the array that fits the image of the car (were not artists)
	virtual void prepCar() {
        // Car Body (rectangle shape)
        for (int i = 8; i < 12; i++) {
            for (int j = 3; j < 17; j++) {
                array[i][j] = 1;
            }
        }

        // Car Roof (smaller rectangle on top)
        for (int i = 6; i < 8; i++) {
            for (int j = 6; j < 14; j++) {
                array[i][j] = 1;
            }
        }

        // Left wheel
        array[12][5] = 1;
        array[13][5] = 1;
        array[12][6] = 1;
        array[13][6] = 1;

        // Right wheel
        array[12][13] = 1;
        array[13][13] = 1;
        array[12][14] = 1;
        array[13][14] = 1;
    }
    //draws car
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
    //will print the cars "carname" along with " is driving " when called
    void isDriving() {
        cout << carName << " is Driving\n" << endl;
    }
};


class BMW : public car {
public:
    //reuses the base car contructor to make the BMW
    BMW() : car("bmw", "BMW") {}

    //initlizes the array that fits the image of the car (were not artists)
    void prepCar() override {

        // Car Body (rectangle shape)
        for (int i = 8; i < 12; i++) {
            for (int j = 1; j < 19; j++) {
                array[i][j] = 1;
            }
        }

        // Car Roof (smaller rectangle on top)
        for (int i = 5; i < 9; i++) {
            for (int j = 6; j < 14; j++) {
                array[i][j] = 1;
            }
        }

        // Left wheel
        array[12][5] = 1;
        array[13][5] = 1;
        array[12][6] = 1;
        array[13][6] = 1;
        array[14][5] = 1;
        array[14][6] = 1;

        // Right wheel
        array[12][13] = 1;
        array[13][13] = 1;
        array[12][14] = 1;
        array[13][14] = 1;
        array[14][13] = 1;
        array[14][14] = 1;
    }
};


class mazda : public car {
public:
    //reuses the base car contructor to make the Mazda
    mazda() : car("MAZDA", "Mazda") {}

};
