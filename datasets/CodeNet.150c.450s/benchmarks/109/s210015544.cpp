/*~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=
    WRITER:kakitamasziru/OxOmisosiru
~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=*/
#define _GLIBCXX_DEBUG
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
const long long INF = 100100100100100;
const int MOD = 1000000007;
typedef pair<int,int> P;
//NのM乗を求める(繰り返し二乗法)
long long mod_pow(long long N, long long M) {
    if (M == 0) return 1;
    long long res = mod_pow((N * N) % MOD, M / 2);
    //最下位ビット(*N)が1の時は単独でNをかける
    if (M & 1) res = (res * N) % MOD;

    return res %= MOD;
}

int rui[240001];

int main() {
    int N; cin >> N;
    vector<int> ans;
    while(N != 0){
        vector<P> retu(N);
        for(int i = 0;i<240001;i++)rui[i] = 0;
        for(int i = 0;i<N;i++){
            string S,T;cin >> S >> T;
            string h = S.substr(0,2);
            string m = S.substr(3,2);
            string s = S.substr(6,2);
            int Hour = stoi(h)*10000;
            int Min = stoi(m)*100;
            int Sec = stoi(s);
            retu.at(i).first = Hour+Min+Sec;

            h = T.substr(0,2);
            m = T.substr(3,2);
            s = T.substr(6,2);
            Hour = stoi(h)*10000; Min = stoi(m)*100; Sec = stoi(s);
            retu.at(i).second = Hour+Min+Sec;
        }
        int count = 0;
        for(int i = 0;i<N;i++){
            rui[retu.at(i).first]++;
            rui[retu.at(i).second]--;
        }
        for(int i = 1;i<240001;i++){
            rui[i] += rui[i-1];
            count = max(count,rui[i]);
        }
        ans.push_back(count);
        cin >> N;
    }

    for(int i = 0;i<ans.size();i++)cout << ans.at(i) << endl;


    // PLEASE GIVE ME THE "ACCEPTED" !
}
