#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;++i)
#define SZ(a) (int)((a).size())
#define F first
#define S second


int main(){
  int n;
  while(cin >> n,n){
    int appx[1000]={};
    int appy[1000]={};
    int dx[] = {0,1,0,-1};
    int dy[] = {-1,0,1,0};
    rep(i,n-1){
      int ni,di;
      cin >> ni >> di;
      appx[i+1] = appx[ni]+dx[di];
      appy[i+1] = appy[ni]+dy[di];
    }
    
    cout 
         << *max_element(appy,appy+n) - *min_element(appy,appy+n) +1<< " "
    << *max_element(appx,appx+n) - *min_element(appx,appx+n) +1<< endl;
  }
}