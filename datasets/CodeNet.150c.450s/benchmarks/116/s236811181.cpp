#include <iostream>
#include <algorithm>
#define INF (2 << 28)
using namespace std;

int main(){
    
    int n, k, a[111111];
    int sum[111111];
    
    while(cin >> n >> k, n||k){
        fill_n(sum, 111111, 0);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        sum[0] = a[0];
        for(int i = 0; i < n; i++) sum[i] = sum[i - 1] + a[i];
    
        int maxi = -INF;
        for(int i = k; i < n; i++)
            maxi = max(maxi, sum[i] - sum[i - k]);
        
        cout << maxi << endl;
    }
}