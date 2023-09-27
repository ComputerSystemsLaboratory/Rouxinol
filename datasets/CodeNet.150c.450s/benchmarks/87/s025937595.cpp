#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i < (n);i++)
#define ALL(obj) (obj).begin(),(obj).end()
#define SCANF(i) int i;scanf("%d",&i)
using namespace std;
using P = pair<int,int>;
const long long INF = 1LL << 60;
const int IINF=100000000;
const int MOD = (int)1e9 + 7;
typedef long long ll;
//約数列挙
vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    //sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}
vector<int> dx={1,0,-1,0};vector<int> dy={0,-1,0,1};

signed main(){
    int h;
    while(cin>>h){
        if(h==0)break;
        vector<vector<int>> list(h,vector<int>(5));
        ll ans=0;bool roopflag=true;
        REP(i,h)REP(j,5)cin >> list[i][j];

        while(true){
            roopflag=false;
            REP(i,h){
                REP(j,3){
                    if(list[i][j] != 0 && list[i][j] == list[i][j+1] && list[i][j+1]==list[i][j+2]){
                        roopflag=true;
                        int cnt =3;int num = list[i][j];
                        FOR(k,j+3,5){
                            if(list[i][j]==list[i][k])cnt++;
                            else break;
                        }
                        //cout << cnt << endl;
                        FOR(d,j,j+cnt)list[i][d]=0;
                        ans+=cnt*num;
                    }
                }
            }
            if(!roopflag)break;
            for(int i=h-1;i>0;i--){
                for(int j=0;j<5;j++){
                    if(list[i][j]==0){
                        for(int q=i-1;q>=0;q--){
                            if(list[q][j]!=0){
                                swap(list[i][j],list[q][j]);
                                break;
                            }
                        }
                    }
                }
            }
        }
        printf("%lld\n",ans);
    }
}
