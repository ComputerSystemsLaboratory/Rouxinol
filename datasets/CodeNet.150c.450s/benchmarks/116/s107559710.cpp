#include <iostream>
#include <climits>

int main() {
    using namespace std;
    
    int n, k;
    while(cin >> n >> k, (n|k)) {
        int arr[n]; cin >> arr[0]; for(int i=1; i<n; i++) { cin >> arr[i]; arr[i] += arr[i-1]; }
    
        int res = INT_MIN/4;

        for(int i=0; i<n-k; i++) {
            res = max(res, arr[i+k]-arr[i]);    
        }
    
        cout << res << endl;
    }
    
    return 0;
}