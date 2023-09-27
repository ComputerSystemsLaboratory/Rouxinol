#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <climits>

using namespace std;

#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

int main()
{
    int n, m;
    while (cin >> n >> m, n | m) {
        vector<int> taro(n);
        REP(i, n) {
            cin >> taro[i];
        }
        vector<int> hanako(m);
        REP(i, m) {
            cin >> hanako[i];
        }

        pair<int, int> ans(INT_MAX, INT_MAX);
        int taroSum = accumulate(ALL(taro), 0);
        int hanakoSum = accumulate(ALL(hanako), 0);
        REP(i, n) {
            REP(j, m) {
                if (taroSum - taro[i] + hanako[j] == hanakoSum - hanako[j] + taro[i]) {
                    ans = min(ans, pair<int, int>(taro[i], hanako[j]));
                }
            }
        }
        if (ans.first == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << ans.first << " " << ans.second << endl;
        }
    }
    return 0;
}