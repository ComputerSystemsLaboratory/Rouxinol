#include <iostream>
using namespace std;
int gcd(int,int); //最大公約数
int lcm(int,int); //最小公倍数
int main(){
    int a,b;
    while (cin >>a >>b){
        cout << gcd(a,b) << " " << lcm(a,b) << endl;
    }
}

int gcd(int a,int b){
    int n;
    if (a>b){
        n=b;
        b=a;
        a=n;
    }
    n = a;
    while(b%a!=0){
        n=b%a;
        b=a;
        a=n;
    }
    return n;
}

int lcm(int a,int b){
    int n = a/gcd(a,b)*b;
    return n;
}