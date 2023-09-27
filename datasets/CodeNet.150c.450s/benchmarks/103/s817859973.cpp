#include<iostream>
using namespace std;

int n,s,ans;

void solve(int i,int j,int t){

  if(j == s && t == n){
    ans++;
    return;
  }

  if(i == 10) return;

  solve(i+1,j,t);
  solve(i+1,j+i,t+1);
}


int main(){

  while(true){
    cin >> n >> s;
    if(!n && !s) break;

    ans = 0;
    solve(0,0,0);

    cout << ans << endl;
  }
}