#include<bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)
#define rrep(i,n) for(int i = (n)-1; i >= 0; i--)
#define rep1(i,n) for(int i = 1; i <= (n); i++)
#define rrep1(i,n) for(int i = (n); i > 0; i--)

#define ll long long
#define pi pair<int, int>
#define pll pair<ll, ll>

#define MOD 1000000007

using namespace std;

int n;
int solve(){
  vector<int>t(86401);
  rep(i, n){
    int h1,m1,s1,h2,m2,s2;
    scanf("%2d:%2d:%2d %2d:%2d:%2d",&h1,&m1,&s1,&h2,&m2,&s2);
    int l = h1*3600+m1*60+s1;
    int r = h2*3600+m2*60+s2;
    t[l]++;
    t[r]--;
  }
  rep(i, 86400)t[i+1]+=t[i];
  int result = 0;
  rep(i, 86400)result = max(result, t[i]);

  return result;
}

int main(){
  while(cin>>n){
    if(n==0)break;
    cout<<solve()<<endl;
  }

  return 0;
}

