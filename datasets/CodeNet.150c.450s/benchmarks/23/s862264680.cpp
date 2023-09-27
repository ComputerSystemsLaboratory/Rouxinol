#include <iostream>
using namespace std;

const int MAX = 44;
int F[MAX];

int fib(int n){
  if(n==0 || n==1) return F[n];
  if(F[n] != -1) return F[n];
  return F[n] = fib(n-1) + fib(n-2);
}


int main() {
    ios::sync_with_stdio(false);

    F[0] = F[1] = 1;
    for(int i=2; i<=MAX; i++) F[i] = -1;

    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}