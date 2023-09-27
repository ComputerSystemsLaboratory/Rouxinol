#include <bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int n, m; cin >> n >> m;
        if(n == 0 && m == 0) break;
        vector<pair<int, int>> dp(n);
        int ans = 0;
        for(int i = 0; i < n; i++){
            int a, b; cin >> a >> b;
            ans += a * b; //護衛なしの期待値
            dp.at(i) = make_pair(b, a); //ソートしやすいように期待値を先にする
        }
        sort(dp.rbegin(), dp.rend());
        for(int i = 0; i < n; i++){
            if(m >= dp.at(i).second){
                ans -= dp.at(i).first * dp.at(i).second;
                m -= dp.at(i).second;
            }
            else{
                ans -= m * dp.at(i).first;
                break;
            }
        }
        cout << ans << endl;
    }
}
