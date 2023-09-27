#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int A[100001] = {};

int main(){
    
    int i, x, y, N, Q;
    long ans = 0;
    cin >> N;
    
    for (i = 0; i < N; i++){
        
        cin >> x;
        A[x]++;
    }

    for (i = 0; i < 100001; i++){
        
        ans += i * A[i];
    }

    cin >> Q;
    
    for (i = 0; i < Q; i++){
        
        cin >> x >> y;
        
        ans += (y - x) * A[x];
        cout << ans << "\n";
        A[y] += A[x];
        A[x] = 0;
    }
        
    return 0;
}


