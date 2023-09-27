#include<iostream>
using namespace std;


int main(){
  int n, k;
  int a[100100];
  int b[100100];
  for(;;){
    cin >> n >> k;
    if(n==0 && k==0) break;
    
    for(int i=0; i<n; i++){
      cin >> a[i];
    }
    b[0] = 0;
    for(int i=0; i<n; i++){
      b[i+1] = b[i] + a[i];
    }
    int mx = -100000;
    for(int i=0; i<n-k+1; i++){
      int s = b[i+k] - b[i];
      if(mx < s) mx = s;
    }
    cout << mx << endl;
  }
  return 0;
}