#pragma once

#define MAX 20  // The MAX that an array can hold/how much space we draw in
#define pi 3.141593

class draw {
public:
	virtual void Draw(int arr[MAX][MAX]) {
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                if (arr[i][j] == 0) {
                    std::cout << " ";
                }
                else {
                    std::cout << "*";
                }
            }
            std::cout << std::endl;
        }
	}
};