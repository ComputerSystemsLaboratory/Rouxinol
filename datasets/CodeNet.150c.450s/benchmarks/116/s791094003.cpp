#include<iostream>
#include<climits>
using namespace std;

int main(){
    while(1){
        int n, k;
        cin >> n >> k;
        if(n+k == 0)    break;
        int A[n+1];
        A[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> A[i];
            A[i] += A[i-1];
        }
        int ans = INT_MIN;
        for(int i = k; i <= n; i++){
            ans = max(ans, A[i] - A[i-k]);
        }
        cout << ans << endl;
    }
    return 0;
}
