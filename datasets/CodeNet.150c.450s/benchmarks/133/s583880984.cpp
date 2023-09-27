#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define rep(i, n)   for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
    int d;  cin >> d;
    vector<int>c(26);
    rep(i, 26)  cin >> c[i];
    vector<vector<int> >s(d, vector<int>(26));
    rep(i, d)   rep(j, 26)  cin >> s[i][j];
    /*
     * scoring
     */
    int score = 0;
    vector<int>t(d);
    vector<int>v(d);
    vector<vector<int> >last(d+1, vector<int>(27));
    rep(i, d)   cin >> t[i];
    for(int i = 1; i <= d; i++){
        int tmp = i-1;
        score += s[tmp][t[tmp]-1];
        for(int j = 1; j <= 26; j++){ last[i][j] = last[i-1][j]; }
        last[i][t[tmp]] = i;
        int dec = 0;
        rep(j, 26){
            dec += c[j]*(i-last[i][j+1]);
        }
        score -= dec;
        v[tmp] = score;
    }
    rep(i, d)   cout << v[i] << endl;
}
