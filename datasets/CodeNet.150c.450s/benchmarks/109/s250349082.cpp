#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

typedef long long ll;
using namespace std;
int mod = 1000000007;

int main(void){
    int N;
    vector<int> ans;
    while(true){
        vector<int> train(60*60*24, 0);
        cin >> N;
        if(N == 0) break;
        rep(i, N){
            string S, T; cin >> S >> T;
            int h, m, s;
            h = (S[0]-'0')*10 + (S[1]-'0');
            m = (S[3]-'0')*10 + (S[4]-'0');
            s = (S[6]-'0')*10 + (S[7]-'0');
            train[h*3600 + m*60 + s]++;

            //cout << h << " " << m << " " << s << endl;

            h = (T[0]-'0')*10 + (T[1]-'0');
            m = (T[3]-'0')*10 + (T[4]-'0');
            s = (T[6]-'0')*10 + (T[7]-'0');
            train[h*3600 + m*60 + s]--;
        }
        int res = 0;
        rep(i, 86399){
            train[i+1] += train[i];
            res = max(res, train[i+1]);
        }
        ans.push_back(res);
    }
    rep(i, ans.size()) cout << ans[i] << endl;
    return 0;
}
