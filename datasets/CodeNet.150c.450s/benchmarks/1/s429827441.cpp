#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000005;

int h[MAXN], max_length = 0;

int main() {
    
    int N;
    cin >> N;
    
    for (int i=0; i<N; i++){
        int x;
        cin >> x;

        int lo = lower_bound(h,h+max_length,x) - h;
        h[lo] = x;
        
        max_length = max(lo+1,max_length);
    }
    
    cout << max_length << endl;

    return 0;
}