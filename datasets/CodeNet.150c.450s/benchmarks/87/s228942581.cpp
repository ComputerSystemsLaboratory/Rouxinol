#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <tuple>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <numeric>
#include <stack>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using pii = pair<int,int>;
int main(){
    int h;
    while(cin>>h,h){
        vector< vector<int> >v(h,vector<int>(5));
        for(auto& vec : v)
            for(auto& e : vec)
                cin  >> e;
        vector< pair<pii,int> >del;
        int ans = 0;
        bool flag = true;
        vector<vector<bool>>used(h,vector<bool>(5,true));
        while(flag){
            del.clear();
            for(int i = 0; i < h;i++){
                for(int j = 0; j < 4;j++){
                    if(!used[i][j])continue;
                    bool foo=true;
                    int cnt = 1;
                    int k= j + 1;
                    while (foo && k < 5) {
                        if(!used[i][k])break;
                        if(v[i][j] == v[i][k]){
                            cnt++;
                            k++;
                        } else {
                            foo = false;
                        }
                    }
                    if(cnt < 3)continue;
                    del.emplace_back(pii(i,j),cnt);
                    rep(_,cnt-1) used[i][ j+_]=false;
                    ans += cnt * v[i][j];
                }
            }
            if(del.empty())
                break;
            vector<vector<int>>temp(h,vector<int>(5));
            rep(i,h){
                rep(j,5){
                    rep(k,del.size()){
                        if(del[k].first==pii(i,j)){
                            rep(_,del[k].second){
                                used[del[k].first.first][del[k].first.second+_]=false;
                            }
                        }
                    }
                }
            }
            int last[10000]={0};
            for(int i=h-1; i>=0;i--){
                rep(j,5){
                    if(!used[i][j])continue;
                    {
                        temp[(h-1-last[j])][j] = v[i][j];
                        used[h-1-last[j]][j]=true;
                        last[j]++;
                        
                    }
                }
            }
            v = temp;
        }
        cout << ans << endl;
    }
}



