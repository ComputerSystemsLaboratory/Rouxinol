#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int n,smin;
  while(true){
    smin= 10000000;
    cin >> n;
    if(n == 0) break;
    int s[n];
    for(int i = 0 ; i < n ; i++) scanf("%d",&s[i]);
    for(int i = 0; i < n-1; i++){
      for(int j = i+1; j<n; j++){
        smin = min( (abs(s[i]-s[j])) ,smin);
      }
    }
    cout << smin << endl;
  }
  return 0;
}

