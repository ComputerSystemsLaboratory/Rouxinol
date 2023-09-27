#include<bits/stdc++.h>

#define _GLIBCXX_DEBUG
#define all(v) (v).begin(),(v).end()

using namespace std;

using ll=long long;
using pii=pair<int, int>;
using vi=vector<int>;
using vii=vector<vector<int>>;

const ll LINF=1LL<<60;
const int INF=1<<29;
const int MOD=1e9+7;

int main(){
    int cost;
    int money[6]={500, 100, 50, 10, 5, 1};
    while(cin >> cost && cost){
        int change=1000-cost;
        int ans=0;
        for(int i=0; i<6; i++){
            if(change == 0) break;
            ans+=change/money[i];
            change=change%money[i];
        }
        cout << ans << endl;
    }
    return 0;
}
