#include <iostream>
using namespace std;

#define rep(i,n) for(int i=0;i<n;++i)

int main(){

  int n;
  cin >> n;
  rep(i,n){
    int y,m,d,ans=0;
    cin >> y >> m >> d;
    while(y<1000){
      while(m<=10){
	while(d<=19){
	  d++; ans++;	
	}
	if(y%3==0 || m%2 == 1) ans++;
	d=1;
	m++;
      }
      m=1; 
      y++;
    }
    cout << ans << endl;
  }

}