#include<iostream>
#include<algorithm>
#include<map>
#include<set>
#include<vector>
#include<cstring>
#include<string>
#include<queue>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

#define REP(i,a,n) for(int i = a ; i < n  ;i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

void solve(){
}

int main(){
  int n,p;

  while(cin>>n>>p,n||p){
    int rem[n+2];
    memset(rem,0,sizeof(rem));
    int stone = p;
    int now = 0;
    int winner = -1;

    while(1){
      if(stone >= 1){
        rem[now]++;
        stone--;
        if(stone == 0 && rem[now] == p){
          winner = now;
          break;
        }
      }
      else{
        stone += rem[now];
        rem[now] = 0;
      }

      now = (now + 1) % n;
    }

    cout<<winner<<endl;
  }
}