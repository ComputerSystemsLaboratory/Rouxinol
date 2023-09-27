#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){


  while(1){
    int n,a,b,c,x,y[110];
    cin >> n >> a >> b >> c >> x;
    if(n==0 && a == 0) break;
    rep(i,n) cin >> y[i];

    int i,in=0;
    for(i=0;i<10001;++i,x = (a*x + b) % c){
      if(y[in] == x){
	if(in == n-1){
	  cout << i << endl;
	  break;
	}
	in++;
      }
    }
    if(i == 10001) cout << "-1\n";
  }

}