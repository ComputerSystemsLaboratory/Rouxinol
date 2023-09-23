#include <iostream>
using namespace std;

long long int factorial(long long int n, long long int res){
    if (n == 1) return res;
    return factorial(n-1, res * n);
}

int main(){
    long long int n;
    cin >> n;
    cout << factorial(n, 1) << endl;;
    return 0;
}