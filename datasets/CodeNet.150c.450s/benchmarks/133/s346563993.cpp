#include <iostream>
#include <vector>
using namespace std;

int main(){
    int d;
    cin >> d;
    vector<int> c(26);
    for(int i = 0; i < 26; i++) cin >> c[i];
    vector<vector<int>> s(d+1, vector<int>(26));
    for(int i = 1; i <= d; i++){
        for(int j = 0; j < 26; j++) cin >> s[i][j];
    }
    vector<int> t(d+1);
    vector<int> last(26, 0);
    for(int i = 1; i <= d; i++){
        cin >> t[i];
        t[i]--;
    }

    int ans = 0;
    for(int i = 1; i <= d; i++){
        ans += s[i][t[i]];
        last[t[i]] = i;
        for(int j = 0; j < 26; j++){
            ans -= c[j] * (i - last[j]);
        }
        cout << ans << endl;
    }
    return 0;
}