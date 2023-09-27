#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<(b);++i)
#define erep(i,a,b) for(int i=a;i<=(int)(b);++i)
#define per(i,a,b) for(int i=(b);i>(a);--i)
#define eper(i,a,b) for(int i=((int)(a));i>=b;--i)
#define pb push_back
#define mp make_pair
#define INF 2000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return a/gcd(a, b)*b;}

class dice{
    int d[7], tmp[7];

public:
    dice(int* a) {
        erep(i, 1, 6) d[i] = a[i];
    }

public:
    void rotate(string direct) {
        if (direct == "N")
            tmp[1] = d[2], tmp[2] = d[6], tmp[3] = d[3], tmp[4] = d[4], tmp[5] = d[1], tmp[6] = d[5];
        else if (direct == "S")
            tmp[1] = d[5], tmp[2] = d[1], tmp[3] = d[3], tmp[4] = d[4], tmp[5] = d[6], tmp[6] = d[2];
        else if (direct == "W")
            tmp[1] = d[3], tmp[2] = d[2], tmp[3] = d[6], tmp[4] = d[1], tmp[5] = d[5], tmp[6] = d[4];
        else if (direct == "E")
            tmp[1] = d[4], tmp[2] = d[2], tmp[3] = d[1], tmp[4] = d[6], tmp[5] = d[5], tmp[6] = d[3];
        erep(i, 1, 6) d[i] = tmp[i];
    }
    
    int top() {
        return d[1];
    }
};


int main() {
 ios::sync_with_stdio ( false );
 cin.tie ( 0 );
    int n = 6, a[7];
    erep(i, 1, n) cin >> a[i];
    string s; cin >> s;
    dice D = dice(a);
    rep(i, 0, s.size()) {
        string sub = s.substr(i, 1);
        D.rotate(sub);
    }
    cout << D.top() << endl;
    return 0;
}
