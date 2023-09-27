#include <iostream>
#include <bitset>
#include <algorithm>
#include<string.h>

using namespace std;

bitset<10002> mat[12];
bitset<10002> one;
int m, n;

int dfs(int i, bitset<10002> one, int ans){
    if(i == m) return ans;

    if(i >= 0){
        mat[i] = one;
        int sub_ans = 0;
            for(int s = 0; s < n; ++s){
                int up = 0;
                for(int t = 0; t < m; ++t){
                    if(mat[t][s]){
                        up++;
                    }
                }
                sub_ans += max(up, m - up);
            }
        ans = max(ans, sub_ans);
    }

    return max(dfs(i + 1, mat[i+1], ans), dfs(i + 1, mat[i+1].flip(), ans));
}

int main(){
    while(cin>>m>>n && m > 0 && n > 0){
        memset(mat, 0, sizeof(mat));
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                bool tmp;
                cin>>tmp;
                mat[i][j] = tmp;
            }
        }
        cout<<dfs(-1, mat[0], 0)<<endl;
    }
    return 0;
}

