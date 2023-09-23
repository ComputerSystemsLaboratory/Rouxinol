//euclidean algorithm
#include<iostream>
using namespace std;

void euclid(int a, int b);

int main(){
    int a,b;
    cin >> a >> b;
    euclid(a, b);
    
    return 0;
}

void euclid(int a, int b) {
    int t;
    if ( a < b ) swap(a, b);
    while ( b > 0 ) { //a返すから 計算してみる 54 20
        t = a % b;
        a = b;
        b = t;
    }  
    cout << a << endl;
}

