#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int INF = 1000000000;

int main(){
    int n; cin >> n;
    vector<int> a(n), dp(n, INF);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++){
        *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
    }
    
    auto ite = lower_bound(dp.begin(), dp.end(), INF);
    cout << distance(dp.begin(), ite) << endl;
    
    return 0;
}