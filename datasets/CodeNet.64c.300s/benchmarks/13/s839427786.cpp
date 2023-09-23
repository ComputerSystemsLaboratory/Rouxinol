#include <iostream>
using namespace std;

int fibmemo[45] = {0};
int fibMemo(int n);

int fib(int n){
    if(n == 0 || n == 1)   return 1;
    else
        return fibMemo(n - 1) + fibMemo(n - 2);    
}

int fibMemo(int n){
    if(fibmemo[n] == 0){
        fibmemo[n] = fib(n);
    }
    return fibmemo[n];
}


int main(void){
    int n;
    cin >> n;
    cout << fib(n) << endl;
}

