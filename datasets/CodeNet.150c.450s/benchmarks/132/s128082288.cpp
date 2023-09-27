#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
#define REP(i,a,n) for(int i = a ; i < n ; i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

int main(){
  int n,p,tp;
  int cnt[52];

  while(cin>>n>>p,n||p){
    tp = p;
    memset(cnt,0,sizeof(cnt));

    int now = 0;

    while(1){
      if(p > 0){
        cnt[now]++;
        p--;

        if(cnt[now] == tp){
          cout<<now<<endl;
          break;
        }
      }
      else{
        p += cnt[now];
        cnt[now] = 0;
      }

      now = (now + 1) % n;
    }
  }
}