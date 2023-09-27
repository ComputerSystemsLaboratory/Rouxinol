#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main(){


  int n;

  cin >> n;

  int *a = new int[n];

  int *b = new int[n];

  int c[10001];

  for(int i = 0; i <= 10000; i++){
    c[i] = 0;
  }

  for(int i = 0; i < n; i++){
    cin >> a[i];
    c[a[i]]++;
  }

  for(int i = 1; i <= 10000; i++){
    c[i] = c[i - 1] + c[i];
  }

  for(int i = n - 1; i >= 0; i--){
    b[c[a[i]] - 1] = a[i];
    c[a[i]]--;
  }

  for(int i = 0; i < n; i++){
    if(i == 0) cout << b[i];
    else cout << ' ' << b[i];
  }
  cout << endl;

  delete[] a, b;
  return 0;
}

