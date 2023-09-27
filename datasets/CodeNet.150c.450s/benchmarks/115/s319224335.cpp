#include <bits/stdc++.h>
using namespace std;
static const int hoge = 1000;
int C[1000][1000];
int lc(string F, string S){

    fill(C[0],C[hoge],0);
    int m = F.size(), n = S.size();
    int len=0;
    for(int i=0; i<m; i++){
        for (int j = 0; j < n; ++j) {
            if (F[i] == S[j]) {
                if (i - 1 >= 0 && j - 1 >= 0)
                    C[i][j] = C[i - 1][j - 1] + 1;
                else
                    C[i][j] = 1;
            } else if (i - 1 < 0) {
                if(j-1 < 0){
                    C[i][j] = 0;
                }else{
                    C[i][j] = C[i][j - 1];
                }
            }else if(j-1 < 0) {
                C[i][j] = C[i - 1][j];
            }else{
                C[i][j] = max(C[i-1][j], C[i][j - 1]);
            }
            len = max(len, C[i][j]);
        }
    }
    return len;
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string ar1,ar2;
    for (int i = 0; i < n; ++i) {
        cin >> ar1 >> ar2;
        cout << lc(ar1,ar2) << endl;
    }
    return 0;
}