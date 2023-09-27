#include <iostream>
#include <string>
using namespace std;

int n, m, solve[1010][1010];
string s1, s2;
int l1, l2, tmp;
    
int dp(int n, int m) {
    
    if (solve[n][m] >= 0) return solve[n][m];
    
    else if (n == 0 || m == 0) solve[n][m] = max(n, m);
    
    else {
        tmp = min(dp(n - 1, m), dp(n, m - 1)) + 1;
        if (s1[n - 1] == s2[m - 1]) solve[n][m] = min(tmp, dp(n - 1, m - 1));
        else solve[n][m] = min(tmp, dp(n - 1, m - 1) + 1);
    }
    
    return solve[n][m];
}

int main(void){

    cin >> s1;
    cin >> s2;
    l1 = s1.size();  l2 = s2.size();
    
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 1000; j++) solve[i][j] = -1;
    }
    
    cout << dp(l1, l2) << endl;
}

