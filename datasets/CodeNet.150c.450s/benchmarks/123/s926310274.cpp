#include <iostream>
#include <cmath>
using namespace std;
#define rep(i,k,n) for(int i = k; i < n ; i++)
#define MAX 10000001

 
 bool is[MAX];

// n log log n
// 10^8 
void era(){
  rep(i,0,MAX) is[i] = true;
  is[0] = is[1] = 0;
  rep(i,2,MAX){
    if(is[i]){
      for(int j = 2; i*j < MAX; j++){
	is[i*j] = false;
      }   
    }
  }
}

int main(){
  // N root(n)
  // 10^4 10^4
  int n,p,ans = 0;
  cin >> n;

  rep(i,0,n){
    cin >> p;
    bool ex =true;
    if((p%2 == 0 && p != 2 )|| p == 1) continue;
    for(int j = 3 ;j <= sqrt(p) ;j += 2){
    
      if(p%j == 0) ex = false;
    }
    if(ex) ans++;
  }
  cout << ans << endl;
  return 0;
}