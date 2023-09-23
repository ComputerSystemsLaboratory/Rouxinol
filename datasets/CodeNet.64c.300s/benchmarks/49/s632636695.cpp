#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b;
    int sum;
    while(cin >> a >> b){
        sum = 0;
        sum = log10(a+b)+1;
        cout << sum << endl;
    }
    return 0;
}