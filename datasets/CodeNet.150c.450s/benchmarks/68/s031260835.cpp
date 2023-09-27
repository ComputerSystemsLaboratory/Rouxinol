#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n > 0){
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int ans = 101010101;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                ans = min(ans, abs(a[i]-a[j]));
            }
        }
        cout << ans << endl;
        cin >> n;
    }
}
