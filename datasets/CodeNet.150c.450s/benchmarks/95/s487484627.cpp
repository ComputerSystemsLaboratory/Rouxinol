#include<bits/stdc++.h>
#define LL long long
#define REP(i,n) for(int i=0;i<(n);++i)
#define REPA(i,n) for(int i=1;i<(n);++i)
#define foreach(i, n) for(auto &i:(n))
#define PII pair<int,int>
#define PLI pair<long long, int>
#define PLL pair<long long, long long>
#define PDD pair<double, double>
#define MOD ((int)1e9 + 7)
#define INF ((int)1e9)
#define INFLL ((LL)1e18)
#define ALL(x) (x).begin(),(x).end()
#define ctoi(x) (x - 'a') 
#define CTOI(x) (x - 'A')
#define BIT(x) (1 << (x))
using namespace std;

LL modinv(LL a){
    LL b = MOD, u = 1, v = 0;
    while(b){
        LL t = a / b;
        a -= t * b;swap(a, b);
        u -= t * v;swap(u, v);
    }
    u%=MOD;
    if(u < 0) u += MOD;
    return u;

}

LL exp(LL a, LL b){
    LL sum = a;
    LL res = 1;
    while(b){
        if(b&1){
            res = (res * sum)%MOD;
        }
        sum = (sum * sum) % MOD;
        b>>=1;
    }
    return res;
}

int main(){
    int N;
    while(cin>>N&&N){
        int right=0;
        int left=0;
        int ans = 0;
        while(N>=2){
            if(right==left){
                string a;
                string b;
                cin >> a >> b;
                if(a[0]!=b[0])++ans;
                N-=2;
            }else{
                string a;
                cin>>a;
                if(a[0]=='l')++left;
                else ++right;
                --N;
            }
        }
        string d;
        REP(i, N)cin>>d;
        cout << ans << endl;
    }
    return 0;
}

