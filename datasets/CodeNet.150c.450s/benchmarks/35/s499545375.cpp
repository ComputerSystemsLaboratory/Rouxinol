#include    <iostream>
#include    <algorithm>
#include    <vector>

using namespace std;

int main() {
    vector<int> cum;
    int n, sum, tmp;
    
    while(true) {
        cin >> n;
        if(n == 0) { break; }
        
        cum.resize(n+1);
        cum[0] = 0;
        sum = (-2147483647);
        
        for(int i = 1; i <= n; i++) {
            cin >> tmp;
            cum[i] = cum[i-1] + tmp;
        }

        for(int i = 0; i < n; i++) {
            for(int j = i+1; j <= n; j++) {
                sum = max(sum, cum[j] - cum[i]);
            }
        }
        cout << sum << endl;
    }
    return 0;
}
