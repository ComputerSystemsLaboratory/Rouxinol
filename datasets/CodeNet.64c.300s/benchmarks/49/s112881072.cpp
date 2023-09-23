#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int a,b;
    while (1){
        cin >> a;
        if (cin.eof())
            break;
        cin >> b;
        cout << floor(log10(a+b)+1) << endl;
    }
    return 0;
}