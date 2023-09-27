#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define ALL(a) (a).begin(),(a).end()
#define MOD 100000
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;
const int INF=1e9;
int rec(int h,int m,int s){
      return h*3600+m*60+s;
}
int cnt[60*60*24+1];
int main(){
      int n;
      while(cin>>n&&n){
            memset(cnt,0,sizeof(cnt));
            int h1,m1,s1,h2,m2,s2;
            REP(i,n){
                  scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
                  cnt[rec(h1,m1,s1)]++;
                  cnt[rec(h2,m2,s2)]--;
            }
            int ans=0;
            REP(i,60*60*24+1){
                  if(i==0)continue;
                  cnt[i]+=cnt[i-1];
                  ans=max(cnt[i],ans);
            }
            cout<<ans<<endl;
      }
}