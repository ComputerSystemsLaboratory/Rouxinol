#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int d;
    while (cin >> d) {
        int area = 0;
        for (int i=0; i+d<=600; i+=d) {
            area += d * i * i;
        }
        cout << area << endl;
    }
    return 0;
}