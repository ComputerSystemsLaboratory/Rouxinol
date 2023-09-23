#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
int main(){
  int n;
  while(cin >> n){
    int count = 0;
    rep(i,10){
      rep(j,10){
        rep(k,10){
          rep(l,10){
            if(i+j+k+l == n) count++;
          }
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}

