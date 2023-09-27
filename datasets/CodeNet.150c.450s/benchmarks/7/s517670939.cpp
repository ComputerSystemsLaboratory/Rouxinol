#include <iostream>
#include <algorithm>
using namespace std;

int Size = 10;

int main(void) {
    int height[Size];
    
    for(int i = 0; i < Size; ++i) {
        cin >> height[i];
    }
    sort(height, height + Size);
    for(int i = 1; i <= 3; ++i) {
        cout << height[Size - i] << endl;
    }
}
