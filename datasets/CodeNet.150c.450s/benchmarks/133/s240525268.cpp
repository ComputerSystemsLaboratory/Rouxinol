#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int D;
    cin >> D;

    vector<int> c(26);
    rep(i, 26) {
        cin >> c.at(i);
    }

    vector<vector<int>> s(D, vector<int>(26));
    rep(d, D) {
        rep(i, 26) {
            cin >> s.at(d).at(i);
        }
    }

    vector<int> t(D);
    rep(d, D) {
        cin >> t.at(d);
        t.at(d)--;
    } 

    int score = 0;

    vector<int> last(26);
    rep(i,26) last[i]= -1;

    rep(d, D) { //d:day
        last[t.at(d)] = d;
        //cout << "s: " << s[d][t[d]] << endl;
        score += s[d][t[d]];
        //cout << "score" << d << " " << score << endl; 
        rep(i, 26) { //i:contest
            score -= c[i] * (d - last[i]);
        }
        cout << score << endl;
    }
    
}