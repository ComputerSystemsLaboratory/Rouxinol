#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    vector<int> dp(n, INT_MAX);
    for(int i = 0; i < n; ++i){
        *lower_bound(begin(dp), end(dp), a[i]) = a[i];
    }

    cout << lower_bound(begin(dp), end(dp), INT_MAX)-begin(dp) << endl;
}
