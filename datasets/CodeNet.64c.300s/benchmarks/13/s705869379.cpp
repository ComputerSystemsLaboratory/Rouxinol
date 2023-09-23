//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_A
#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int fib(int n){
    int a0 = 0, a1 = 1;
    int a2 = 0;
    for(int i=0; i<n; i++){
        a2 = a0+a1;
        a0 = a1;
        a1 = a2;
    }
    return a2;
}


int main(){
    int n;
    cin >> n;
    //cout << fibonacci(n) << endl;
    cout << fib(n) << endl;

}