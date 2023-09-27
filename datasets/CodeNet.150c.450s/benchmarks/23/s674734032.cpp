#include <iostream>

using namespace std;

int fibonacci(int n){
    int F[n+1];
    F[0] = 1;
    F[1] = 1;
    for(int i = 2; i <= n; i++) F[i] = F[i-2] + F[i-1];
    return F[n];
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
