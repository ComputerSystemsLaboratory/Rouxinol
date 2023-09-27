#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
#define ll long long
#define ull unsigned long long
#define M 1000000007
#define P pair<int,int>
#define PLL pair<ll,ll>
#define FOR(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define RFOR(i,m,n) for(int i=(int)m;i>=(int)n;i--)
#define rep(i,n) FOR(i,0,n)
#define rrep(i,n) RFOR(i,n,0)
#define all(a) a.begin(),a.end()
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define PI 3.14159265


void f(int n){
  int a[100][100]={};
  rep(i,n){
    rep(j,5){
      cin>>a[n-1-i][j];
    }
  }
  ll ans = 0;
  bool flag = true;



  while(flag){
    
    flag = false;
    rep(i,n){
      rep(j,3){
        if(a[i][j]==0) continue;
        int b = a[i][j];
        int c = 0;
        FOR(k,j,6){
          if(b==a[i][k]) c++;
          else break;
        }
        if(c>=3){
          ans += c*b;
        
          while(b==a[i][j]){
            a[i][j]=0;
            j++;
            flag = true;
          
          }
        }
      }
    }
    rep(i,5){
      rep(j,n){
        if(a[j][i]==0){
          int k = j;
          while(a[k][i]==0&&k<n) k++;
          a[j][i] = a[k][i];
          a[k][i] = 0;
        }
      }
    }
  }

  cout<<ans<<endl;

}

int main(){
  int n;
  while(1){
    cin>>n;
    if(n==0) break;
    f(n);
  }
}
