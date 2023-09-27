#include <bits/stdc++.h>
using namespace std;
int main(){
    
    cin.tie( 0 );
    ios::sync_with_stdio( false );
    
    while(true){
        int n;
        cin >> n;
        
        if(n == 0){ break; }
        vector<int> vc(n);
        
        for(int i=0; i<n; i++){
            cin >> vc[i];
        }
        sort(vc.begin(), vc.end());
        auto res = (accumulate(vc.begin() + 1, vc.end() -1, 0));
        cout << res / (n-2) << endl;
    }
    return 0;
}