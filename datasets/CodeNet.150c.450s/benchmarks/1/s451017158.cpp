#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>

using namespace std;

int DP[100001];
int A[100001];

#define INF (1000000001)


void LCS(int n){
    
    for (int i = 0; i < n; i++){
        *lower_bound(DP, DP + 100001, A[i]) = A[i];
    }
}


int main(){
    
    int n;
    scanf("%d", &n);

    for (int i = 0; i< n ; i++) {
        scanf("%d", &A[i]);
    }
    
    fill(DP, DP + 100001, INF);
    
    LCS(n);
    
    int ans = 0;
    
    for (int i = 0;  i < n; i++) {
        if (DP[i] != INF) {
            ans++;
        }
        else{
            break;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}