//	created : 16/05/09
// 	author   : Rp7rf
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <set>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define INF 1e9


int main(void){
  int n,m;
  while(cin>>n>>m){
    if(n == m && n == 0)break;
    vi nn(n),mm(m);
    int nsum,msum;
    nsum = msum = 0;
    rep(i,n){cin>>nn[i];nsum += nn[i];}
    rep(i,m){cin>>mm[i];msum += mm[i];}
    sort(nn.begin(),nn.end());
    sort(mm.begin(),mm.end());
    bool find = false;
    int sn , sm;
    int ma = 100000000;
    rep(i,n)rep(j,m){
      if(msum +  nn[i] - mm[j] == nsum + mm[j] - nn[i]){
        if(ma > nn[i] + mm[j]){
          ma = nn[i] + mm[j];
          sn = nn[i];
          sm = mm[j];
        }
      //  cout<<sn<<" "<<sm<<endl;
        find = true;
        break;
      }
      if(find)break;
    }
    if(!find)cout<<-1<<endl;
    else cout<<sn<<" "<<sm<<endl;
  }
}