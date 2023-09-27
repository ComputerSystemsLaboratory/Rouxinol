#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define REP(i,a) for(int i=0;i<(a);i++)
#define MOD 1000000007

int main(){
  while(1){
    int h,w;
    cin>>w>>h;
    if(h==0&&w==0) break;
    int a[h][w];
    bool used[h][w];
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        cin>>a[i][j];
        used[i][j]=0;
      }
    }
    int ans=0;
    queue<pair<int,int>> q;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        if(a[i][j]&&!used[i][j]){
          //cout<<i<<" "<<j<<endl;
          ans++;
          q.push(make_pair(i,j));
          while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            int x=p.first, y=p.second;
            if(used[x][y]) continue;
            used[x][y]=1;
            for(int i=-1;i<2;i++){
              for(int j=-1;j<2;j++){
                if(x+i==-1||x+i==h) continue;
                if(y+j==-1||y+j==w) continue;
                if(a[x+i][y+j]&&!used[x+i][y+j]){
                  q.push(make_pair(x+i,y+j));
                }
              }
            }
          }
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

