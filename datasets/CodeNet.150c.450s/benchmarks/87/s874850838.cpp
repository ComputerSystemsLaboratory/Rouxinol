#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e9;
const ll mod = 1e9+7;
typedef pair<int,int> P;
#define rep(i,N) for(int i=0;i<N;i++)
#define rep2(i,m,N) for(int i=m;i<N;i++)
#define mm(n,m) memset(n,m,sizeof(n))

int main(){
  int h;
  while(cin>>h){
    if(h==0)return 0;
    int m[h][5];
    int dm[h][5];
    rep(i,h){
      rep(j,5){
        cin>>m[i][j];
      }
    }
    int res = 0;
    mm(dm,0);
    bool OK = true;
    while(OK){ //dmが全部0になるまで
      rep(i,h){
        int c[5];
        mm(c,0);
        rep(j,5){
          if(m[i][j]==0)continue;
          queue<int> que;
          que.push(j);
          int cnt = 0;
          int dx[2] = {1,-1};
          int v[5]= {0,0,0,0,0};
          while(que.size()){
            int p = que.front(); que.pop();
            v[p] = 1;
            for(int k=0;k<2;k++){
              int nx = p + dx[k];

              if(nx<0||nx>4){
                continue;
              }
              if(m[i][nx] != m[i][j] || v[nx]!=0){
                continue;
              }
              //cout<<"aA"<<endl;
              que.push(nx);
            }
            cnt++;
          }
          //cout<<cnt<<endl;
          if(cnt > 2){
            dm[i][j] = 1;
          }
        }
      }

      
      rep(i,h){
        rep(j,5){
          //cout<<dm[i][j]<<" ";
        }
        //cout<<endl;
      }

      int cnt = 0;
      //ここから消滅処理
      rep(i,h){
        rep(j,5){
          if(dm[i][j]==1){
            dm[i][j]=0;
            res += m[i][j];
            m[i][j] = 0;
          }else{
            cnt++;
          }
        }
      }
      if(cnt == h*5){
        OK = false;
      }

      //ここから落下処理
      for(int i = 1; i<h; i++){
        for(int j = 0; j < 5; j++){
          int k = i;
          while(m[k][j]==0){
            m[k][j] = m[k-1][j];
            m[k-1][j] = 0;
            k--;
            if(k<1)break;
          }
        }
      }

      //cout<<"res:"<<res<<endl;
      
      rep(i,h){
        rep(j,5){
          //cout<<m[i][j]<<" ";
        }
        //cout<<endl;
      }
      //cout<<endl;

    }

      cout<<res<<endl;
    }
  }

