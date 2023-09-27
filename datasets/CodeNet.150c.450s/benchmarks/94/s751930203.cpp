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
    int n;
    cin >> n;
    VI a(n);
    rep(i, n){
        cin >> a[i];
    }
    int cnt = 0, j = 0;
    bool flag = true;
    while(flag){
        flag = false;
        for(int i = n - 1 ; i > j ; i--){
            if(a[i] < a[i-1]){
                swap(a[i], a[i-1]);
                cnt++;
                flag = true;
            }
        }
        j++;
    }
    rep(i, n){
        cout << a[i];
        if(i == n - 1){
            cout << endl;
        }else{
            cout << " ";
        }
    }
    cout << cnt << endl;
    return 0;
}
