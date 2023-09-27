#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

string X;
string Y;

int calc(int x, int y, vector<vector<int> >& Memo){
    if (X[x] == '\0' || Y[y] == '\0') return 0;
    if (Memo[x][y] != -1) return Memo[x][y];

    int unuse = calc(x + 1, y, Memo);
    int use = 0;
    int y_target = Y.find(X[x], y);
    if (y_target == string::npos) {
        use = 0;
    } else {
        use = calc(x + 1, y_target + 1, Memo) + 1;
    }
    return Memo[x][y] = max(unuse, use);
}

int main(){
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> X;
        cin >> Y;
        vector<int> tmp(Y.size(), -1);
        vector<vector<int> > Memo(X.size(), tmp);
        cout << calc(0, 0, Memo) << endl;
    }

    return 0;
}