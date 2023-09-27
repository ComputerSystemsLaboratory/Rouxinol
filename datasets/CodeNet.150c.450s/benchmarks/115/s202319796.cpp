#include <cstdio>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

const int kMax = 1000 + 10;

int n, m;
char a_str[kMax], b_str[kMax];
int dp[kMax];

vector<int> init_num() {
    vector<int> res;
    map<char, set<int> > table;
    for(int i = 0;i < n;++ i) {
        if(table.count(a_str[i]) > 0) table[a_str[i]].insert(i);
        else {
            set<int> s;
            s.insert(i);
            table[a_str[i]] = s;
        }
    }
    for(int i = 0;i < m;++ i) {
        if(table.count(b_str[i]) > 0) {
            for(auto it = table[b_str[i]].rbegin();it != table[b_str[i]].rend();++ it) {
                res.push_back(*it);
            }
        }
    }
    return res;
}

int solve() {
    n = strlen(a_str);
    m = strlen(b_str);
    vector<int> num = init_num();
    if(num.empty()) return 0;
    int res = 1;
    dp[0] = num[0];
    for(int i = 1;i < num.size();++ i) {
        if(dp[res - 1] < num[i]) dp[res ++] = num[i];
        else dp[lower_bound(dp, dp + res, num[i]) - dp] = num[i];
    }
    return res;
}

int main() {
    int q;
    scanf("%d", &q);
    while(q --) {
        scanf("%s%s", a_str, b_str);
        printf("%d\n", solve());
    }
    return 0;
}