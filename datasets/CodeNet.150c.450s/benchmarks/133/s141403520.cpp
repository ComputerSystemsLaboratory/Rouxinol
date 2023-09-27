#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

const int num=26;

int main(){
    int D;
    int c[num];
    cin >> D;
    vector<vector<int>> s(D, vector<int>(num));
    rep(i,num) cin >> c[i];
    rep(i,D) rep(j,num) cin >> s[i][j];
    
    vector<int> t(D);
    vector<int> last(num);
    rep(i,D){
        int tmp;
        cin>>tmp;
        t[i]=--tmp;
    }

    int score=0;
    rep(i,D){
        last[t[i]] = i+1;
        score += s[i][t[i]];
        rep(j,num){
            score -= c[j] * (i+1 - last[j]);
        }
        cout << score << endl;
    }


    return 0;
}
