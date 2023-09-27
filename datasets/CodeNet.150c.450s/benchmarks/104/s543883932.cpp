#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  char d[2];
  cin >> n >> m;
  int a[n],b,c;
  for(int i = 0;i < n;i++) a[i] = i+1;
  for(int i = 0;i < m;i++){
    cin >> b >> d[0] >> c;
    swap(a[b-1],a[c-1]);
  }
  for(int i = 0;i < n;i++)cout << a[i] << endl;
  return 0;
}