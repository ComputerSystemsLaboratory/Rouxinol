#include <iostream>

using namespace std;

int a[2000001],c[10001],b[2000001],n,_max=0;;

int main(){
  cin >> n;
  for(int i=0; i<10001; ++i) c[i] = 0;
  for(int i=0; i<n; ++i) {
    cin >> a[i];
    ++c[a[i]];
    if(_max < a[i]) _max = a[i];
  }
  for(int i=0; i<_max; ++i) c[i+1] += c[i];

  for(int i=n-1; i>=0; --i){
    b[c[a[i]]] = a[i];
    --c[a[i]];
  }

  for(int i=1; i<n+1; ++i){
    cout << b[i];
    if(i < n) cout << " ";
  }
  cout << endl;
  


  return 0;
}

