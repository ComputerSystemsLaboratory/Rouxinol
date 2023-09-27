#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int height[10];
    
    for(int i = 0; i < 10; ++i) {
        cin >> height[i];
    }
    sort(height, height + 10);
    
    for(int i = 0; i < 3; ++i) {
        cout << height[9 - i] << endl;
    }
}
