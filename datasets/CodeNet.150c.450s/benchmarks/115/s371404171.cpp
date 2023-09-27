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
    int next_X = count(X, i + 1, Y, j, MEMO);
    int j_next = Y.find(X[i], j);
    if (j_next == string::npos) return MEMO[i][j] = next_X;
    int saiyou = count(X, i + 1, Y, j_next + 1, MEMO) + 1;
    return MEMO[i][j] = max(saiyou, next_X);
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