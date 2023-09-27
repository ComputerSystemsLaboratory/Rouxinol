#include<iostream>
using namespace std;

const int MAX = 100000;
int n, a[MAX];
int dp[MAX+1];

//最長増加部分列問題
int lis(){
    dp[0] = a[0];
    int length = 1;

    for(int i = 1; i < n; ++i){
        if(dp[length-1] < a[i]){
            dp[length++] = a[i];
        }
        else{
            *lower_bound(dp, dp+length, a[i]) = a[i];
        }
    }
    return length;
}

int main() {

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    
    int ans = lis();
    cout << ans << endl;

    return 0;
}
