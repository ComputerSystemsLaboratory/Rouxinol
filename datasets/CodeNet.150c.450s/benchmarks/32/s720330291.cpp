#include<bits/stdc++.h>
using namespace std;

int main(){
  int m,ns,nd,P[201];
  while(cin >> m >> ns >> nd , m){
    for(int i=0;i<m;i++){
      cin >> P[i];
    }
    int ans = 0;
    int mmax = -1;
    for(int i=nd;i>=ns;i--){
      int gapp = P[i-1] - P[i];
      if(mmax < gapp){
	mmax = gapp;
	ans = i;
      }
    }
    cout << ans << endl;
  }
}