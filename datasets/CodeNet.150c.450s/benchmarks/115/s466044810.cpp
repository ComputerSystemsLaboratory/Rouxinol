#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int Q = 0;
    string X,Y;
    cin>>Q;
    for (int q = 0; q < Q; q++) {
        cin>>X>>Y;

        int len[1001][1001] = {};
        for (int s = 1; s <= X.length(); s++) {
            for (int t = 1; t <= Y.length(); t++) {
                if (X[s-1] == Y[t-1]) len[s][t] = 1 + len[s-1][t-1];
                else len[s][t] = max(len[s-1][t], len[s][t-1]);
            }
        }
        cout<<len[X.length()][Y.length()]<<endl;
    }
}