#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        vector<int> V(n);
        for(auto &v:V) cin>>v;
        sort(V.begin(), V.end());
        int ans = 1e9;
        for(int i=1;i<n;i++){
            ans = min(ans, V[i]-V[i-1]);
        }
        cout<<ans<<endl;
    }

    return 0;
}