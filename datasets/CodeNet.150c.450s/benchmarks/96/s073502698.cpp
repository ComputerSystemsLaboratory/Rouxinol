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

int count(int y, int m, int d){
    int res = 0;
    res += d;
    res += (m-1) * 19;
    if(y%3){
        res += m / 2;
    }else{
        res += m - 1;
    }
    --y;
    res += y * 195;
    res += y / 3 * 5;
    return res;
}

string func(){
    string str;
    string codes[]={"*", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    cin >> str;
    int count=0;
    int bn=0;
    string res="";
    foreach(i, str){
        int j = i-'0';
        if(j==bn)++count;
        else{
            res += codes[bn][count%codes[bn].size()];
            bn=j;
            count=0;
        }
    }
    string ans = "";
    foreach(i, res){
        if(i!='*')ans+=i;
    }
    return ans;
}

int main(){
    int N;
    cin >> N;
    REP(i, N){
        cout << func() << endl;
    }
    return 0;
}

