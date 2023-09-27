#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int n;
const int MAX = 100100;

int calctime(string s) {
    int hh, mm, ss;
    hh = (s.at(0)-'0') * 10 + (s.at(1)-'0');
    mm = (s.at(3)-'0') * 10 + (s.at(4)-'0');
    ss = (s.at(6)-'0') * 10 + (s.at(7)-'0');
    return hh*3600 + mm*60 + ss;
}

int main() {
    while(1) {
        cin >> n;
        if(n == 0) break;
        vector<int> timer(MAX, 0);
        for(int i = 0; i < n; ++i) {
            string fins, sins;
            cin >> fins >> sins;
            int ftime = calctime(fins); int stime = calctime(sins);
            timer.at(ftime)++;
            timer.at(stime)--;
        }

        for(int i = 0; i < 100000; ++i) timer.at(i+1) += timer.at(i);
        int ans = 0;
        for(int i = 0; i < 100000; ++i) chmax(ans, timer.at(i));
        cout << ans << endl;
    }
}
