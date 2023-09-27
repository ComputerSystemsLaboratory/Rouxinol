#include<algorithm>
#include<climits>
#include<cmath>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<utility>
#include<vector>

#define lint long long
#define VI vector<int>
#define VL vector<lint>
#define VC vector<char>
#define VVI vector<vector<int>>
#define rep(i, n) for(int i = 0 ; i < n ; i++)
#define SORT(c) sort((c).begin(), (c).end())
#define SORT_INV(c) sort((c.begin(), c.end(), greater<int>())
#define IINF INT_MAX
#define LLINF LLONG_MAX

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    queue< pair<string, int> > que;
    rep(i, n){
        string name;
        cin >> name;
        int t;
        cin >> t;
        que.push(make_pair(name, t));
    }
    int ti = 0;
    while(!que.empty()){
        auto tmp = que.front();
        que.pop();
        ti += min(tmp.second, q);
        if(tmp.second <= q){
            cout << tmp.first << " " << ti << endl;
        }else{
            tmp.second -= q;
            que.push(tmp);
        }
    }
    return 0;
}
