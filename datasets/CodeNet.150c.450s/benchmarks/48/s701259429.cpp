#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int e;
    while(cin >> e, e) {
        int mini = 2 << 28;
        for(int i = 0; i * i * i <= e; i++) {
            int z = i * i * i;
            for(int j = 0; j * j <= e - z; j++) {
                mini = min(mini, i + j + (e - z - j * j));
            }
        }
        cout << mini << endl;
    }
}