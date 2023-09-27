#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const long long INF = (1LL << 60);
using namespace std;

const int MAX_V = 101;

void init(long long m[MAX_V][MAX_V]){
    rep(i,MAX_V) rep(j,MAX_V) m[i][j] = INF;
    rep(i,MAX_V) m[i][i] = 0;
}

void warshallFloyd(long long m[MAX_V][MAX_V], int n){
    rep(k,n){
        rep(i,n){
            rep(j,n){
                m[i][j] = min(m[i][j], m[i][k] + m[k][j]);
            }
        }
    }
}

bool isNegative(long long m[MAX_V][MAX_V]){
    rep(i,MAX_V){
        if(m[i][i] < 0) return true;
    }
    return false;
}

int main(){
    int v, e;
    long long m[MAX_V][MAX_V];

    init(m);
    cin >> v >> e;
    rep(i,e){
        int a, b, c;
        cin >> a >> b >> c;
        m[a][b] = c;
    }
    warshallFloyd(m, v);
    if(isNegative(m)) cout << "NEGATIVE CYCLE" << endl;
    else{
        rep(i,v){
            rep(j,v){
                if(j) cout << ' ';
                if(m[i][j] >= (1LL << 50)) cout << "INF";
                else cout << m[i][j];
            }
            cout << endl;
        }
    }
}