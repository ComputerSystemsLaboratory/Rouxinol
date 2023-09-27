#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int fib_t[45] = {0};

int fib(int i){
    if (i <= 1) return 1;
    if (fib_t[i] != 0) return fib_t[i];
    int nacci;
    nacci = fib(i-1) + fib(i-2);
    fib_t[i] = nacci;
    
    return nacci;
}

int main(){
    int i;
    cin >> i;
    cout << fib(i) << endl;
    
    return 0;
}