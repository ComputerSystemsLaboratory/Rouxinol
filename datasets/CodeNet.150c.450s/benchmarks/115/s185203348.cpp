#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#define NIL -1
using namespace std;

int count(const string& X, int i, const string Y, int j,
          vector<vector<int> >& MEMO){
    if (i >= X.size() || j >= Y.size()) return 0;
    if (MEMO[i][j] != NIL) return MEMO[i][j];
    int j_tmp = j;
    int saiyou = 0;
    while (j_tmp < Y.size()) {
        if (X[i] == Y[j_tmp]) {
            saiyou = count(X, i + 1, Y, j_tmp + 1, MEMO) + 1;
            break;
        };
        j_tmp++;
    }
    int next_X = count(X, i + 1, Y, j    , MEMO);
    int next_Y = count(X, i    , Y, j + 1, MEMO);
    return MEMO[i][j] = max({saiyou, next_X, next_Y});
}

int main(){
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        string X, Y;
        cin >> X >> Y;
        vector<vector<int> > MEMO(X.size(), vector<int>(Y.size(), NIL));
        cout << count(X, 0, Y, 0, MEMO) << endl;
    }
    return 0;
}