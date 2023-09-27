#include <bits/stdc++.h>
using namespace std;

int toNum(string s){
    int time = 0;
    time += (s[0] - '0') * 10 * 3600;
    time += (s[1] - '0') * 3600;
    time += (s[3] - '0') * 10 * 60;
    time += (s[4] - '0') * 60;
    time += (s[6] - '0') * 10;
    time += (s[7] - '0');
    return time;
}

int main(){
    int n;
    while(cin >> n && n){
        vector<int> time(86401);
        for(int i = 0; i < n; i++){
            string s, t;
            cin >> s >> t;
            int start = toNum(s), goal = toNum(t);
            time[start]++;
            time[goal]--;
        }
        int ans = 0;
        for(int i = 1; i < 86401; i++){
            time[i] += time[i-1];
            if(ans < time[i]) ans = time[i];
        }
        cout << ans << endl;
    }
}
