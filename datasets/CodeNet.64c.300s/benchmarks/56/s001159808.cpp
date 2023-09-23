#include <iostream>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;++i)
#define Rep(i,a) rep(i,0,a)

int date(int y,int m, int d){

  int ans=0;
  rep(i,y,1000){
    rep(j,m,10+1){
      if( i % 3 == 0)
	rep(k,d,20+1){
	  ans++;
	}
      else if( j % 2 != 0)
	rep(k,d,20+1){
	  ans++;
	}
      else
	rep(k,d,19+1){
	  ans++;
	}
      d = 1;
    }
    m = 1;
  }
  return ans;
}

int main(){

  int n;
  cin >> n;
  rep(i,0,n){
    int y,m,d;
    cin >> y >> m >> d;
    cout << date(y,m,d) << endl;
  }
  return 0;
}