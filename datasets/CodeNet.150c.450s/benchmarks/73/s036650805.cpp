#include<bits/stdc++.h>
using namespace std;

//#define USING_LONG_LONG
#ifdef USING_LONG_LONG
    #define int long long
    const int INF=1001001001001001001ll;
#else
    const int INF=1001001001;
#endif

#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,n) for(int i=(int)(n)-1;i>=0;i--)
#define RREP(i,a,b) for(int i=(a)-1;i>=(b);i--)
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define clr(a) memset((a),0,sizeof(a))
#define CLR(a) memset((a),-1,sizeof(a))
#define each(i,v) for(__typeof((v).begin()) i=(v).begin();i!=(v).end();i++)
#define minv(a,b) (a)=min((a),(b))
#define maxv(a,b) (a)=max((a),(b))
typedef vector<int>vi;
typedef vector<vi>vvi;
typedef vector<string>vs;
typedef pair<int,int>pii;
#define fi first
#define se second

const int SQ=400;
int N,Q;
struct latte{
    vi v;
    int s;
    latte(){v.clear();s=0;}
};

vector<latte>li;

signed main(){
    scanf("%d%d",&N,&Q);
    latte now;
    rep(i,N){
        now.v.pb(0);
        if(i%SQ==SQ-1){li.pb(now);now=latte();}
    }
    if(now.v.size())li.pb(now);

    while(Q--){
        int type,x,y;scanf("%d%d%d",&type,&x,&y);
        if(type==0){
            x--;
            int cur=0;
            rep(i,li.size()){
                if(cur<=x&&x<cur+li[i].v.size()){
                    li[i].v[x-cur]+=y;
                    li[i].s+=y;
                    break;
                }
                cur+=li[i].v.size();
            }
        }
        else{
            x--;y--;
            int ret=0,cur=0;
            rep(i,li.size()){
                if(x<=cur&&cur+li[i].v.size()<=y+1)ret+=li[i].s;
                else if(!(y<cur||cur+li[i].v.size()<x+1)){
                    rep(j,li[i].v.size()){
                        if(x<=cur+j&&cur+j<=y)ret+=li[i].v[j];
                    }
                }
                cur+=li[i].v.size();
            }
            printf("%d\n",ret);
        }
    }
    return 0;
}