#include <bits/stdc++.h>
using namespace std;

#define MAX 2000000
typedef long long ll;


int main(){

  int n;
  cin >> n;
  //cout << "hoge" << endl;
  int c[10001], *b, *a;
  b = new int[n];
  a = new int [n];
  //cout << "hoge" << endl;
  memset(c,0,sizeof(c));

  for(int i = 0; i < n; i++){
    cin >> a[i];
    c[a[i]]++;
  }
  for(int i = 1; i <= 10001; i++){
    c[i] = c[i] + c[i-1];
   // cout << c[i] << " ";
  }

  for(int i = n-1; i >= 0; i--){
    b[c[a[i]]] = a[i];
    c[a[i]]--;
  }

  for(int i = 1; i <= n; i++){
    if(i != n) cout << b[i] << " " ;
    else cout << b[i];
  }
  cout << endl;

}