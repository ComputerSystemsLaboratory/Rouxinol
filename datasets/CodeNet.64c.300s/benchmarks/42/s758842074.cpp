#include <iostream>
using namespace std;
#define rep(i,n)for(int i = 0 ; i < n ; i++)
#define MAX 20

int main()
{
  while(true){
    int n;
    cin >> n;
    if(n == 0) break;

    int x[MAX], y[MAX];
    rep(i,n){
      cin >> x[i] >> y[i];
    }
    for(int i = n ; i < MAX ; i++){
      x[i] = y[i] = -1;
    }

    int m;
    cin >> m;
    int rpx = 10, rpy = 10;

    for(int i = 0 ; i < m ; i++){
      char d;
      int l;
      cin >> d >> l;
      int dx = 0, dy = 0;
      if(d == 'N'){
	dy = 1;
      }else if(d == 'E'){
	dx = 1;
      }else if(d == 'S'){
	dy = -1;
      }else if(d == 'W'){
	dx = -1;
      }

      for(int i = 0 ; i < l ; i++){
	rpx += dx;
	rpy += dy;
	for(int j = 0 ; j < n ; j++){
	  if(rpx == x[j] && rpy == y[j]){
	    x[j] = y[j] = -1;
	  }
	}
      }
    }
      bool tf = true;
      rep(i,n){
	if(x[i] != -1){
	  cout << "No" << '\n';
	  tf = false;
	  break;
	}
      }
      if(tf){
	cout << "Yes" << '\n';
      }
  }
}