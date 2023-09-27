#include "bits/stdc++.h"
using namespace std;

#define dump(...) DUMPOUT<<"  ";DUMPOUT<<#__VA_ARGS__<<" :["<<__LINE__<<":"<<__FUNCTION__<<"]"<<std::endl;DUMPOUT<<"    ";dump_func(__VA_ARGS__)
#define PI 3.14159265358979323846
#define EPS 1e-10
#define FOR(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,n)  FOR(i,0,n)
#define all(j) (j).begin(), (j).end()
#define SZ(j) ((int)(j).size())

int D = 365;
const int T = 26;

vector<int> c(T);
vector<vector<int>> s(D, vector<int>(T)); 

long long compute_score(vector<int> out) {
    long long score = 0;
    vector<int> last(T, 0);
    REP(d, (int)out.size()) {
        last[out[d]-1] = d+1;
        REP(i, T) {
            score -= (long long)(d+1 - last[i]) * c[i];
        }
        score += s[d][out[d]-1];

        cout << score << endl;
    }

    return score;
}

int main(int argc, char const *argv[])
{
    int d_;
    cin >> d_;
    D = d_;
    
    REP(i, T) cin >> c[i];
    REP(i, D) REP(j, T) cin >> s[i][j];

    vector<int> t(D);
    REP(i, D) cin >> t[i];

    compute_score(t);

    return 0;
}
