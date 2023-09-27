#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define PRINT(x) cout<<(x)<<endl
#define INF 1000000000000 // 10^12
#define MOD 1000000007 // 10^9+7
#define PB push_back
#define MP make_pair

int n;
string t_str1, t_str2;

const int ONEDAY = 24 * 60 * 60;

int ctoi(char c) {
    return c - '0';
}

int read_time(string t_str) {
    int hh = ctoi(t_str[0]) * 10 + ctoi(t_str[1]);
    int mm = ctoi(t_str[3]) * 10 + ctoi(t_str[4]);
    int ss = ctoi(t_str[6]) * 10 + ctoi(t_str[7]);
    int t = 60 * 60 * hh + 60 * mm + ss;
    return t;
}

int main() {
    while (true) {
        cin >> n;
        if (n == 0) break;

        vector<int> time_table(ONEDAY, 0);

        REP(i, n) {
            cin >> t_str1 >> t_str2;
            int t1 = read_time(t_str1);
            int t2 = read_time(t_str2);
            time_table[t1]++;
            time_table[t2]--;
        }

        int ans = 0;
        int num_train = 0;
        REP(i, ONEDAY) {
            num_train += time_table[i];
            ans = max(ans, num_train);
        }
        PRINT(ans);
    }
    return 0;
}
