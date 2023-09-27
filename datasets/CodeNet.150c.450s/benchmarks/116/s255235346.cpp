#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    int i,n,k,a[100100],ans;
    cin >> n >> k;
    while(n!=0 && k!=0){
        ans = 0;
        a[0] = 0;
        for(i=1; i<=n; i++){
            cin >> a[i];
            a[i] += a[i-1];
        }
        for(i=k; i<=n; i++){
            ans = max(ans,a[i]-a[i-k]);
        }
        cout << ans << endl;
        cin >> n >> k;
    }
    return 0;
}