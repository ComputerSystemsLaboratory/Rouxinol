#include<iostream>
using namespace std;

int n,s;
int dfs(int cou,int now,int before);

int main(){
  while(1){
    cin >> n >> s;
    if(n == 0 && s == 0) break;
    int ans = 0;
    for(int i=0;i<10;i++){
      ans = dfs(0,0,-1);
    }
    cout << ans << endl;
  }
}

int dfs(int cou,int now,int before){
  if(cou==n) {
    if(now == s) {
      return 1;
      cout << before << endl;
    }
    else return 0;
  }
  int num = 0;
  for(int i=before+1;i<10;i++){
      num += dfs(cou+1,now+i,i);
  }
  return num;
}