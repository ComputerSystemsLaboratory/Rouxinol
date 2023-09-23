#include<iostream>
using namespace std;

unsigned long Factorial(unsigned long n){
    if(n!=1){
        return n*Factorial(n-1);
    }else{
        return 1;
    }
}

int main(){
    unsigned long n;
    cin >> n;

    cout << Factorial(n) << endl;
return 0;
}