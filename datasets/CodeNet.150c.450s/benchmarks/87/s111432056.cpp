#include<bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)
#define rrep(i,n) for(int i = (n)-1; i >= 0; i--)
#define rep1(i,n) for(int i = 1; i <= (n); i++)
#define rrep1(i,n) for(int i = (n); i > 0; i--)

#define ll long long
#define pi pair<int, int>
#define pll pair<ll, ll>

#define MOD 1000000007
#define INF 1000000000000000LL

using namespace std;
#define MAXH 10
int h;
int result=0;
vector<vector<int>>b(MAXH, vector<int>(5));

void initb(){
  rep(i, MAXH)rep(j, 5)b[i][j]=0;
  result=0;
}

void banish(int h){
  if(b[h][0]==b[h][1] && b[h][0]==b[h][2] && b[h][0]==b[h][3] && b[h][0]==b[h][4]){
    result+=5*b[h][0];
    rep(i, 5)b[h][i]=0;
    return;
  }

  rep(i, 2){
    if(b[h][i]==b[h][i+1] && b[h][i]==b[h][i+2] && b[h][i]==b[h][i+3]){
      result+=4*b[h][i];
      rep(j, 4)b[h][j+i]=0;
      return;
    }
  }

  rep(i, 3){
    if(b[h][i]==b[h][i+1] && b[h][i]==b[h][i+2]){
      result+=3*b[h][i];
      rep(j, 3)b[h][j+i]=0;
      return;
    }
  }
}

void fall(){
  rep(i, 5)rep(j, h){
    if(b[j][i]>0)continue;

    rep(k, h)for(int k=j; k<h-1; k++)if(b[k][i]==0)swap(b[k][i], b[k+1][i]);
  }
}

int solve(){
  initb();

  rrep(i, h)rep(j, 5)cin>>b[i][j];

  rep(j, h){
    rep(i, h)banish(i);
    fall();
  }

  return result;
}

int main(){
  while(cin>>h){
    if(h==0)break;

    cout<<solve()<<endl;
  }

  return 0;
}

