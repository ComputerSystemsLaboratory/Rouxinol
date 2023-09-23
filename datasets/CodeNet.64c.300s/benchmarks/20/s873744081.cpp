#include<iostream>
using namespace std;

int f(int x){
    return x*x;
}

int integral(int d, int d0){
    if(d >= 600){
        return 0;
    }
    
    return(f(d)*d0 + integral(d+d0, d0));
}

int main(){
    int d;
    while(cin >> d){
        cout << integral(d, d) << endl;
    }
    return 0;
}
    