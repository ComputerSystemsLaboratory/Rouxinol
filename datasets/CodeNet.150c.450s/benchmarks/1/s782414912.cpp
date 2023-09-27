#include <bits/stdc++.h>
using namespace std;

long long* binarySearch(long long x, long long* left, long long* right){
    
    while(right - left > 1){
        long long *ptr = left + (right - left) / 2;
        if( x < *ptr ){
            right = ptr;
        }else{
            left = ptr;
        }  
    }
    if(*left < x)return right;
    else return left;
}

int main(){
    int N;
    cin >> N;

    long long a[N];
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }

    long long dp[N];
    int last = 1;
    dp[0] = a[0];
    for(int i = 1; i < N; i++) {
        // for(int j = 0; j <= last; j++) {
        //     cout << dp[j] << " ";
        // }
        // cout << endl;

        if(dp[last-1] < a[i]){
            dp[last++] = a[i];
            continue;
        }
        //*lower_bound(dp,dp+last,a[i])=a[i];
        //long long* p = upper_bound(dp, dp+last-1, a[i]);
        long long* p = binarySearch(a[i], dp, dp+last);
        *p = a[i];
    }

    cout << last << endl;
    return 0;
}
