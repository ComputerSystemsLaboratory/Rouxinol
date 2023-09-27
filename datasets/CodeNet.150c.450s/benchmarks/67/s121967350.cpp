#include<bits/stdc++.h>
using namespace std;

int a[1001];

int main(){
while(1){

    int n;
    cin >> n;
    if(n == 0) break;
    int ans = 0;
    for(int i=1; i < n; i++){
        int sum = 0;
        for(int j=i; sum <= n; j++){
            if(sum == n) ans++;
            //if(sum == n) cout << i << " " << j << endl;
            sum += j;
        }
    }
    if(n == 1) ans = 0;
    cout << ans << endl;
}
    return 0;
}

