#include <iostream>
#include <algorithm>
 
using namespace std;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int s[11][10001];
int c[11][10001];
int main(void){
    int R, C;
    while(cin >> R >> C, R!=0) {
        rep(i, R) {
            rep(j, C) {
                cin >> s[i][j];
            }
        }
        int ans = 0;
        for(int bit=0; bit<(1<<(R+1)); bit++){
            rep(i, R){
                rep(j, C) {
                    c[i][j] = s[i][j];
                }
            }
            rep(i, R) {
                if(bit&(1<<i)){
                    rep(j, C) {
                        if(c[i][j]==1) c[i][j] = 0;
                        else c[i][j]=1;
                    }
                }
            }
            int sum = 0;
            rep(i, C) {
                int count = 0;
                rep(j, R) {
                    if(c[j][i]==1) count++;
                }
                sum += max(count, R-count);
            }
            ans = max(sum, ans);
        }
        cout << ans << endl;
    }
    return 0;
}