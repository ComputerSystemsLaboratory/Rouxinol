#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include<cmath>
#include<limits>
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define int_INF 2147483647
#define pint_INF 2000000000
#define ll_INF 	9223372036854775807
#define MOD 1000000007
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vll vector<long long>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define sysp system("PAUSE")
#define pno cout << "no" << endl
#define pyes cout << "yes" << endl
#define pYes cout << "Yes" << endl
#define pNo cout << "No" << endl
using namespace std;
#define int ll
class Schedule {
private:
    vector<int> C;//size 26
    vector<vector<int>> S; //size Dx26
    vector<int> LastDay;//size 26
    vector<int> MasterType;// size D
public:
    void Input(int D) {
        C.resize(26);
        S.resize(D);
        LastDay.resize(26);
        MasterType.resize(D);
        for (int i = 0; i < D; i++) {
            S[i].resize(26);
        }

        for (int i = 0; i < C.size(); i++) {
            cin >> C[i];
        }
        for (int i = 0; i < S.size(); i++) {
            for (int j = 0; j < S[i].size(); j++) {
                cin >> S[i][j];
            }
        }
    }

    void Test_date() {
        for (int i = 0; i < MasterType.size(); i++) {
            int t; cin >> t; t--;
            MasterType[i] = t;
        }
    }
    ll Satisfaction(int day) {
        int dayscore = S[day-1][MasterType[day-1]];
        int decrease = 0;
        LastDay[MasterType[day-1]] = day;
        for (int i = 0; i < 26; i++) {
            decrease += C[i] * (day - LastDay[i]);
        }

        dayscore -= decrease;
        return dayscore;
    }
};

signed main() {
    int D; cin >> D;
    Schedule Scd; Scd.Input(D);
    Scd.Test_date();
    int ans = 0;
    for (int i = 1; i < D+1; i++) {
        ans += Scd.Satisfaction(i);
        cout << ans << endl;
    }
}