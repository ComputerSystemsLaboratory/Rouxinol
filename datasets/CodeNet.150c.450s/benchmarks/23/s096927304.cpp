#include<algorithm>
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
#define MAX 45
int F[MAX];


int fibonacci(int i){
    if(i == 1 || i == 0) return F[i] = 1;
    if(F[i]) return F[i];
    return F[i] = fibonacci(i-1) + fibonacci(i-2);
}

int main(){
    int n;
    cin >> n;
    fibonacci(n);

    cout << F[n] << endl;

    return 0;
}
