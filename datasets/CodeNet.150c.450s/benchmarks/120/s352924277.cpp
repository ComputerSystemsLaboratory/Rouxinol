#include<bits/stdc++.h>
using namespace std;

using ll=long long;
using P=pair<int, int>;
const ll INF=1LL<<60;
const ll MOD=1e9+7;

int main(){
    while(1){
        int R, C; cin >> R >> C;
        if(R==0 && C==0) break;
        vector<vector<int>> data(R, vector<int>(C));
        for(int i=0; i<R; i++){
            for(int j=0; j<C; j++){
                cin >> data[i][j];
            }
        }
        int res=0;
        for(int bits=0; bits<(1<<R); bits++){
            int sum=0;
            vector<vector<int>> change=data;
            for(int i=0; i<R; i++){
                if(bits & (1<<i)){
                    for(int j=0; j<C; j++){
                        change[i][j]=!change[i][j];
                    }
                }
            }
            for(int i=0; i<C; i++){
                int cnt0=0, cnt1=0;
                for(int j=0; j<R; j++){
                    if(change[j][i] == 0) cnt0++;
                    else cnt1++;
                }
                sum+=max(cnt0, cnt1);
            }
            res=max(res, sum);
        }
        cout << res << endl;
    }
    return 0;
}
