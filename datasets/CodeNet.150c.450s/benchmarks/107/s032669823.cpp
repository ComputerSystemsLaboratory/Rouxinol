#include <iostream>
#include <algorithm>
using namespace std;

#define repeat(i,n) for (int i = 0; i < (n); ++i)
#define repeat_from(i,m,n) for (int i = m; i < (n); ++i)

#define MAX_S 1000
int dp[2][MAX_S+1];

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int *cur = dp[0]; repeat (i,s2.size()+1) cur[i] = i;
    int *prv = dp[1];
    repeat_from (i,1,s1.size()+1) {
        swap(cur,prv);
        cur[0] = prv[0] + 1;
        repeat_from (j,1,s2.size()+1) {
            cur[j] = min(cur[j-1]+1,
                    min(prv[j]+1,
                        prv[j-1]+(s1[i-1]==s2[j-1]?0:1)));
        }
    }
    cout << cur[s2.size()] << endl;
    return 0;
}