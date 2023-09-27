#include<iostream>
#include<algorithm>
using namespace std;

int r,c;
int o[10][10000];

int rec(int n){
  int res,cnt;
  if(n == r){
    res = 0;
    for(int i=0;i<c;i++){
      cnt = 0;
      for(int j=0;j<r;j++){
	if(o[j][i])cnt++;
      }
      if(cnt <= r/2)cnt = r - cnt;
      res += cnt;
    }
    return res;
  }else{
    res = rec(n+1);
    for(int i=0;i<c;i++)o[n][i] = 1 - o[n][i];
    res = max(res,rec(n+1));
    for(int i=0;i<c;i++)o[n][i] = 1 - o[n][i];
    
    return res;
  }
}

int main(){
  int ans;

  while(1){
    cin >> r >> c;
    if(!r  && !c)break;

    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++)cin >> o[i][j];
    }

    ans = rec(0);

    cout << ans << endl;
  }
}