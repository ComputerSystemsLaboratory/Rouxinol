#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> N, X;
    for(;;){
        int n, x;
        cin >> n >> x;
        if(n == 0 && x == 0) break;
        N.push_back(n);
        X.push_back(x);
    }

    for(int i = 0; i < N.size(); i++){
        int ans = 0;
        int n = N.at(i), x = X.at(i);
        for(int j = 1; j <= n; j++){
            for(int k = j+1; k <= n; k++){
                for(int l = k+1; l <= n; l++){
                    if(j + k + l == x){
                        ans++;
                        //cout << j << "+" << k << "+" << l << endl;
                    }
                }
            }
        }
        cout << ans << endl;
    }

}
