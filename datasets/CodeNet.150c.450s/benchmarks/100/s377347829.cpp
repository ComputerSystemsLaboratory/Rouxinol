#include <iostream>
#include <cstdio>
using namespace std;

long factorial(int num) {
    if(num == 1) return(1);
    return(num * factorial(num - 1));
}

int main(void) {
    int num; cin >> num;
    cout << factorial(num) << endl;
    return(0);
}