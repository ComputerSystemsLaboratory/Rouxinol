#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int a,b,num,count;
    while(cin >> a >> b){
        num = a+b;
        cout << (int)log10((double)num) + 1 << endl;
        }
    return 0;
}