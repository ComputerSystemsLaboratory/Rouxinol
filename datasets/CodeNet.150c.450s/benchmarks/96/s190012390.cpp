#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

typedef long long ll;
using namespace std;
int mod[10] = {0,5,3,3,3,3,3,4,3,4};

char moji[10][5] = {{},
                    {'.', ',', '!', '?', ' '},
                    {'a', 'b', 'c'},
                    {'d', 'e', 'f'},
                    {'g', 'h', 'i'},
                    {'j', 'k', 'l'},
                    {'m', 'n', 'o'},
                    {'p', 'q', 'r', 's'},
                    {'t', 'u', 'v'},
                    {'w', 'x', 'y', 'z'}};

int main(void){
    int N; cin >> N;
    rep(i, N){
        string res = "";
        string S; cin >> S;
        int lenS = S.length();
        int idx = 0;
        while(idx < lenS){
            int row = 0;
            int num = S[idx] - '0';
            while(S[idx++] != '0'){
                row++;
            }
            if(num > 0){
                res += moji[num][(row-1) % mod[num]];
            }
        }
        cout << res << endl;
    }
    return 0;
}
