#include <iostream>
#include <vector>
using namespace std;

int main(){
    int R, C;
    while(1){
        cin >> R >> C;
        if(R == 0 && C == 0) break;

        vector<vector<bool>> senbei(R, vector<bool>(C));
        for(int i = 0, x; i < R; ++i){
            for(int j = 0; j < C; ++j){
                cin >> x;
                senbei[i][j] = x&1 ? true : false;
            }
        }

        int ans = 0;
        int m;
        for(int b = 0; b < 1<<R; ++b){ 
            vector<vector<bool>> senbei_tmp = senbei;
            for(int i = 0; i < R; ++i){
                if(b & (1<<i)){
                    for(auto&& s : senbei_tmp[i]) s = !s;
                }
            }

            m = 0;
            for(int i = 0; i < C; ++i){
                int sum = 0;
                for(int j = 0; j < R; ++j) if(senbei_tmp[j][i]) ++sum;
                m += max(sum, R-sum);
            }

            ans = max(ans, m);
        }

        cout << ans << endl;
    }
}
