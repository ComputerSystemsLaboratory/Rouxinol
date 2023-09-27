#include <iostream>
#include <cstdio>
using namespace std;

int i,c;

int area(int d) {
    int sum = 0;
    for(i=d; i<=600-d;i += d){
        c = d * i * i;
        sum = sum + c;
        
    }
    return sum;
}

int main(void){
    int d;
    while(cin >> d) {
       cout << area(d) << endl;
    }
    return 0;
}

