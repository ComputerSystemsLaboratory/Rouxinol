#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>
#include <iomanip>

typedef long long ll;
const ll MOD = 1e9 + 7;
const long long INF = 1LL<<60;
const double PI=3.14159265358979323846;
const int NMAX=100005;
using namespace std;

void solve(int h){
    vector<vector<int> > mp(5,vector<int>(h));
    for(int i = h-1; i >= 0; i--){
        for(int j = 0; j < 5; j++){
            cin >> mp[j][i];
        }
    }
    ll ans = 0;
    ll pre_ans = 0;
    int ch = h;
    // cout << "inputted" << endl;
    while(true){
        for(int i = ch-1; i >= 0; i--){
            int str = 0;
            int pre = 0;
            int j;
            for(j = 0; j < 5; j++){
                if(mp[j].size() <= i || (str != 0 && mp[j][i] != pre)){
                    if(str >= 3) break;
                    str = 1;
                    pre = mp[j][i];
                    continue;
                }
                if(mp[j][i] == pre){
                    str++;
                } else {
                    pre = mp[j][i];
                    str = 1;
                }
            }
            // cout << "evaluated" << endl;
            // cout << "i:" << i << " j:" << j << " str:" << str << endl;
            if(str >= 3){
                int st = j-str;
                for(int k = st; k < j; k++){
                    auto it = mp[k].begin();
                    it+=i;
                    ans+=(*it);
                    mp[k].erase(it);
                }
            }
        }

        int tmp = 0;
        for(int i = 0; i < 5; i++){
            int height = mp[i].size();
            tmp = max(tmp,height);
        }
        ch = tmp;

        if(ans == pre_ans) break;
        else pre_ans = ans;

        
        // cout << "in while" << endl;
    }

    cout << ans << endl;
}

int main(){
    while(true){
        int h;
        cin >> h;
        if(h == 0) break;
        else solve(h);
    }
    return 0;
}
