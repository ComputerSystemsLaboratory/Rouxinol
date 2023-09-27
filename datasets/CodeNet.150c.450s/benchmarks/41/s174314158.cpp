/*~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=
    WRITER:kakitamasziru/OxOmisosiru
~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=*/
#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <iomanip>
#include <limits>//setprecision
//#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <math.h>//pow,,,
#include <cmath>//abs,,,
//#include <unordered_map> // unordered_map
//#include <unordered_set> // unordered_set
#include <bitset> // bitset
//#include <cctype> // isupper, islower, isdigit, toupper, tolower
//It is so troublesome that I include bits/stdc++.h !
using namespace std;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
const long long INF = 100100100100100100;
const int MOD = 1000000007;
typedef pair<bool,long long> P;
//NのM乗を求める(繰り返し二乗法)
long long mod_pow(long long N, long long M) {
    if (M == 0) return 1;
    long long res = mod_pow((N * N) % MOD, M / 2);
    //最下位ビット(*N)が1の時は単独でNをかける
    if (M & 1) res = (res * N) % MOD;

    return res %= MOD;
}

long long dist[114][114];
//隣接行列で辺を管理
//E[][].first = 辺の有無,E[][].second = 辺の重み
P E[114][114];
int V;

void warshall_floyd(){
    for(int i = 1;i<=V;i++){
        for(int j = 1;j<=V;j++){
            //そもそも辺が存在しないならそのままで良い
            if(dist[j][i] == INF) continue;
            for(int k = 1;k<=V;k++){
                if(dist[i][k] == INF) continue;
                dist[j][k] = min(dist[j][k],dist[j][i]+dist[i][k]);
            }
        }
    }
}

int main() {
    int edge;cin >> V >> edge;
    for(int i = 0;i<114;i++){
        for(int j = 0;j<114;j++) {
            dist[i][j] = INF;
            E[i][j].first = false;
        }
    }

    for(int i = 1;i<=V;i++) dist[i][i] = 0;
    
    //とりあえず現時点ではE[i][j]に辺が存在すればdist[i][j]の最短距離はiとjの一辺の重み
    for(int i = 0;i<edge;i++){
        int from,to;
        cin >> from >> to;
        from++;to++;
        E[from][to].first = true;
        int d;cin >> d;
        E[from][to].second = d;
        dist[from][to] = E[from][to].second;
    }

    

    warshall_floyd();

    //負の閉路を持っているかの判定
    //負の閉路を持っている=dist[i][i]が初期の0より小さくなりえる
    for(int i = 1;i<=V;i++){
        if(dist[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for(int i = 1;i<=V;i++){
        for(int j = 1;j<=V;j++){
            if(dist[i][j] == INF) cout << "INF";
            else cout << dist[i][j];
            //ここにNEGATIVE CYCLEの処理
            if(j != V) cout << " ";
        }
        cout << endl;
    }





    // PLEASE GIVE ME THE "ACCEPTED" !
}
