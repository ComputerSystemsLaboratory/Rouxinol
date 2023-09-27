#include <iostream>
#include <cstring>
using namespace std;

bool dp[2001];

int main()
{
    memset(dp, false, 2001);
    dp[0] = true;
    int n = 0;
    cin >> n;
    for (int i = 0; i != n; ++i){
        int a = 0;
        cin >> a;
        for (int j = 2000; j - a >= 0; --j){
            if (dp[j - a]) dp[j] = true;
        }
    }
    
    int q = 0;
    cin >> q;
    for (int i = 0; i != q; ++i){
        int m = 0;
        cin >> m;
        if (dp[m]){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    
    return 0;
}