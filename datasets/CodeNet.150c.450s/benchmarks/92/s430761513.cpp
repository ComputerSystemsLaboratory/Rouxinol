#include <iostream>
#include <cmath>
using namespace std;
 
int main(int argc, char** argv) {
    int a, b; // 0 ??? a, b ??? 1000000
    while(cin >> a >> b) {
        cout << (int)floor(log10((double)a+b))+1 << endl;
    }
    return 0;
}