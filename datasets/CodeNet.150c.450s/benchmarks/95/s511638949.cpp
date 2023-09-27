#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

typedef long long ll;
using namespace std;
int mod = 1000000007;

int main(void){
    string cmd[] = {"lu", "ld", "ru", "rd"};
    vector<int> ans;
    int N;
    while(true){
        int cnt = 0;
        bool aim = true; //false -> [lu, ru]を目指す true -> [ld, rd]を目指す
        bool left = false, right = false;
        cin >> N;
        if(N == 0) break;
        rep(i, N){
            string S; cin >> S;
            if(S[0] == 'l') left = !left;
            else right = !right;

            if(left == aim && right == aim){
                cnt++;
                aim = !aim;
            }
        }
        ans.push_back(cnt);
    }
    rep(i, ans.size()) cout << ans[i] << endl;
    return 0;
}
