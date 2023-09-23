#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main(void) {
    int m,f,r;
    char g;
    for (;;) {
        cin >> m >> f >> r;
        if (m==-1 && f==-1 && r==-1) break;
        if (m==-1 || f==-1) {
            g = 'F';
        } else if (m+f >= 80) {
            g = 'A';
        } else if (m+f >= 65) {
            g = 'B';
        } else if (m+f >= 50) {
            g = 'C';
        } else if (m+f >= 30) {
            if (r >= 50) {
                g = 'C';
            } else {
                g = 'D';
            }
        } else {
            g = 'F';
        }
        cout << g << endl;
    }
    return 0;
}