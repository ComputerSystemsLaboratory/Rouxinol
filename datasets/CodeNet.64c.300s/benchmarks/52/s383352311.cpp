#include<iostream>
using namespace std;
int ans,n,s;
void solve(int,int,int);
int main(){
  while(1){
    ans = 0;
    cin >> n >> s;
    if(n==0&&s==0)break;
    solve(n,s,0);
    cout << ans << endl;
  }
}
void solve(int n,int sum,int min){ //回,計,min値
  if(n==0&&sum==0){
    ans++;
    return;
  }
  for(int i=min;i<10&&n>0;i++){
    if(sum-i>=0) solve(n-1,sum-i,i+1);
  }
}