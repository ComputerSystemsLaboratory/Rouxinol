#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    while(true) {
        int m, d; cin >> m >> d;
        if (m == 0)
            break;
        
        vector<string> ans{"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
        vector<int> months{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        m--;
        int days = 0;
        rep(i, m) {
            days+= months.at(i);
        }
        days+= d;

        cout << (ans.at(days % 7)) << endl;
    }
}
