#include <bits/stdc++.h>
using namespace std;
#ifdef ENABLE_DEBUG_OUTPUT
#define DEBUG_LOG(s) cout << s << endl;
#else
#define DEBUG_LOG(s) void();
#endif
const int time_pow[3] = { 3600, 60, 1 };

int main(){
    while(true) {
        int n;
        cin >> n;

        if(n == 0) return 0;

        vector<int> train(1e5, 0);
        for (auto i = 0; i < n; i++) {
            string s, t; cin >> s >> t;
            int s_index = 0, t_index = 0;
            for (auto j = 0; j < 3; j++) {
                s_index += time_pow[j] * stoi(s.substr(j * 3, 2));
                t_index += time_pow[j] * stoi(t.substr(j * 3, 2));
            }
            train[s_index]++;
            train[t_index]--;
        }

        for (auto i = 0; i < 1e5 - 1; i++) train[i + 1] += train[i];

        int ans = 0;
        for (auto i = 0; i < 1e5; i++) ans = max(ans, train[i]);
        cout << ans << endl;
    }
}
