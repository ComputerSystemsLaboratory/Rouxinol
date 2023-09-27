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

int n;
VI a;

bool solve(int i, int m){
    if(m == 0){
        return true;
    }
    if(i >= n){
        return false;
    }
    return solve(i + 1, m) || solve(i + 1, m - a[i]);
}

int main(){
    cin >> n;
    a.resize(n);
    rep(i, n){
        cin >> a[i];
    }
    int q;
    cin >> q;
    rep(i, q){
        int m;
        cin >> m;
        if(solve(0, m)){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}
