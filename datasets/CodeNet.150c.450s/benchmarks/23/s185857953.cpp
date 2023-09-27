#include<bits/stdc++.h>
using namespace std;

int f[50];

int fibo(int n)
{
  if(n <= 1) return 1;
  else{
    if(f[n]){
      return f[n];
    }
    else{
      return f[n] = fibo(n-1)+fibo(n-2);
    }
  }
}

int main()
{
  int n;
  cin >> n;

  cout << fibo(n) << endl;
  return 0;
}

