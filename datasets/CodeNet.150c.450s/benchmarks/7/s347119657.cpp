#include <iostream>

using namespace std;

int main() {
    int height[10];
    for (int i = 0; i < 10; i++) {
        cin >> height[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            if (height[j] < height[i]) {
                int temp = height[j];
                height[j] = height[i];
                height[i] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << height[i] << endl;
    }
}
