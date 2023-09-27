#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    vector<LL> vc(n);
    
    for(int i=0; i<n; i++){
        cin >> vc[i];
    }
    
    LL res = INT_MIN;
    LL temp = vc[0];
    
    for(int i=1; i<n; i++){
        res = max(res,vc[i]-temp);
        temp = min(temp, vc[i]);
    }
    
    cout << res << endl;
    
    return 0;
    
}