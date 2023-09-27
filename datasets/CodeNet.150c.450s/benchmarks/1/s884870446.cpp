#include <iostream>
#include <vector>
using namespace std;

const long long INF = 1LL<<60;


int main(){
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    
    vector<long long> dp(n+1, INF);
    
    
    for (int i = 0; i < n; i++){
        *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
    }
    
    int ans = lower_bound(dp.begin(), dp.end(), INF) - dp.begin();
    
    cout << ans << endl;
}
