#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0;i < n;i++)
#define repb(i, n) for(int i = n;i >= 0;i--)
#define reps(i, m, n) for(int i = m;i < n;i++)
#define repsb(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef long long ll;
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
using namespace std;

#define N 1000000

int fa[N];
int sa[N];
void cal(void){
 int cl;
 fa[0]=0;
 sa[0]=0;
 reps(i,1,N){
   fa[i]=sa[i]=i;
   reps(j,1,INF){
     cl=j*(j+1)*(j+2)/6;
     if(cl>i) break;
     fa[i]=min(fa[i],fa[i-cl]+1);
     if(cl&1)  sa[i]=min(sa[i],sa[i-cl]+1);
   }
 }
}
int main(int argc, char const *argv[]) {
 cal();
 int t;
 while (true) {
   cin>>t;
   if(t==0)  break;
   printf("%d %d\n",fa[t],sa[t] );
 }
 return 0;
}

