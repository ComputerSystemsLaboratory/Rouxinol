#include <iostream>
using namespace std;


#define rep(i,n) for(int i=0;i<n;++i)

int main(){

  while(1){
    int n,m;
    cin >> n >> m;
    if(n == 0 && m==0)break;
    int h[110],t[110];
    int sumt=0,sumh=0;
    rep(i,n){
      cin >> t[i];
      sumt += t[i];
    }
    rep(i,m){
      cin >> h[i];
      sumh += h[i];
    }
    bool f=false;
    int in,jn,min= 100000007;
    rep(i,n){
      rep(j,m){
	sumt -= t[i];
	sumh -= h[j];
	sumt += h[j];
	sumh += t[i];
	if(sumt == sumh && min > t[i]+h[j]){
	  min =  t[i]+h[j];
	  in = i; jn = j;
	  f = true;
	}
	sumt += t[i];
	sumh += h[j];
	sumt -= h[j];
	sumh -= t[i];
      }
    }
    if(!f) cout << "-1\n";
    else{
      cout << t[in] << " " << h[jn] << endl;
    }
  }
  
  return 0;
}