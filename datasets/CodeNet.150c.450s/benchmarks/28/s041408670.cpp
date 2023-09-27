#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int w[n];
    int m = 0;
    for(int i = 0; i < n; ++i){
        cin >> w[i];
        m += w[i];
    }
    
    int P = 0;
    int j = 0;
    int t = 0;
    int l = 0;
    int r = m;
    while(l < r){
        P = (l + r) / 2;
        while(true){
            int s = 0;
            while(s + w[j] <= P){
                s += w[j];
                j++;
                if(j >= n){
                    break;
                }
            }
            t++;
            if(t > k){
                j = 0;
                t = 0;
                l = P + 1;
                break;
            }
            if(j >= n){
                j = 0;
                t = 0;
                r = P;
                break;
            }
        }
    }
    
    cout << l << endl;
    
    return 0;
}