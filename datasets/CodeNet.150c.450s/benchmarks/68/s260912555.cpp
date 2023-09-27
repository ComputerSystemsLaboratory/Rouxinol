#include <bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int n;
        cin >> n;
        if (n == 0) return 0;
        vector<int> V(n);
        int ans = 1000001;
        for (int i=0;i<n;i++) cin >> V[i];
        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                ans = min(ans,abs(V[i]-V[j]));
            }
        }
      	cout << ans << endl; 
    }
}

