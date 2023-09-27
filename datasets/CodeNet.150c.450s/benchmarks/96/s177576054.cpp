#include <bits/stdc++.h>
using namespace std;

#define rep(i,j) for(int (i)=0;(i)<(j);++(i))

int main() {
    string code[9];
    code[0] = ".,!? ";
    code[1] = "abc";
    code[2] = "def";
    code[3] = "ghi";
    code[4] = "jkl";
    code[5] = "mno";
    code[6] = "pqrs";
    code[7] = "tuv";
    code[8] = "wxyz";
    int n;
    cin >> n;
    rep(i, n) {
        string c;
        cin >> c;
        int idx = -1, cnt = -1;
        rep(j, c.length()) {
            string t = "";
            t += c[j];
            int num = atoi(t.c_str());
            if (num == 0) {
                if (idx != -1 && cnt != -1) cout << code[idx][cnt];
                idx = -1;
                cnt = -1;
            }
            else {
                if (idx == -1 && cnt == -1) {
                    idx = num-1;
                    cnt = 0;
                }
                else {
                    cnt = (cnt+1)%code[idx].length();
                }
            }
        }
        cout << endl;
    }
}