#include <iostream>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)

int main(){

  while(1){
    int n,m;
    cin >> n >> m;
    if(n==0)break;
    int t[200],h[200],st=0,sh=0;
    rep(i,n){
      cin >> t[i];
      st+=t[i];
    }
    rep(i,m){
      cin >> h[i];
      sh+=h[i];
    }
    int ai=0,aj=0,min=10000000;
    rep(i,n){
      rep(j,m){
	sh+=t[i]; sh-=h[j];
	st+=h[j]; st-=t[i];
	if(st==sh && t[i]+h[j] < min){
	  ai=i; aj=j; 
	  min =  t[i]+h[j];
	}
	sh-=t[i]; sh+=h[j];
	st-=h[j]; st+=t[i];
      }
    }
    if(min == 10000000) cout << "-1\n";
else    cout << t[ai] << " " << h[aj] << endl;
  }
  }