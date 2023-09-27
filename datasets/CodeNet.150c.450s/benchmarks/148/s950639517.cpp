#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) v.begin(),v.end()
#define len(x) (ll)(x).length()
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int INF=1e9;
const ll INFS=1e18;
const int MOD=INF+7;
const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};

int main(){
  int n;
  cin>>n;
  vector<int> cnt(4);
  rep(i,n){
    string s;
    cin>>s;
    if(s=="AC") cnt[0]++;
    if(s=="WA") cnt[1]++;
    if(s=="TLE") cnt[2]++;
    if(s=="RE") cnt[3]++;
  }
  cout<<"AC"<<" "<<'x'<<" "<<cnt[0]<<endl;
  cout<<"WA"<<" "<<'x'<<" "<<cnt[1]<<endl;
  cout<<"TLE"<<" "<<'x'<<" "<<cnt[2]<<endl;
  cout<<"RE"<<" "<<'x'<<" "<<cnt[3]<<endl;
}