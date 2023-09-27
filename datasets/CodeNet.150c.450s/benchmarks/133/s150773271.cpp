#include <bits/stdc++.h>
using namespace std;

int main(void){
    int d;
    cin >> d;
    vector<int> c(26);
    for (int i = 0; i < 26; i++) cin >> c.at(i);
    
    vector<vector<int>> s (d, vector<int> (26));
    for(int j = 0; j < d; j++) for(int i = 0; i < 26; i++) cin >> s.at(j).at(i);
    
    int score = 0;
    vector<int> last(26,-1);
    
    for(int i = 0; i < d; i++) {
        int t;
        cin >> t;
        t--;
        score += s.at(i).at(t);
        last.at(t) = i;
        for(int j = 0; j < 26; j++) {
         score -= c.at(j) * (i - last.at(j));
        }
        cout << score << endl;
    }
}
