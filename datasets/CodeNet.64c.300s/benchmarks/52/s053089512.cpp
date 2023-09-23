#include<bits/stdc++.h>
using namespace std;
int a,b,ans;
void dfs(int n,int s,int bit,int bef);
int main(){

  cin >> a >> b;
  while(a!=0||b!=0){
    
    ans = 0;
    dfs(0,0,0,-1);
    cout << ans << endl;
    cin >> a >> b;
  }

  return (0);
}

void dfs(int n,int s,int bit,int bef){
  
  if(n == a){
    if(s == b) ans++;
  }

  else {
    
    for(int i=0;i<=9;i++){
      if( ((1<<i)&bit)==0 && bef<i){
	dfs(n+1,s+i,bit|(1<<i),i);
      }
    }
  }
  
}