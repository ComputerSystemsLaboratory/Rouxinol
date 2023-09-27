#include<iostream>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int n;
  while(cin >> n){

    int ans = 0;
    rep(a,10)rep(b,10)rep(c,10)rep(d,10){
      if(a+b+c+d == n)ans++;
    }
    cout << ans << endl;
  }
}