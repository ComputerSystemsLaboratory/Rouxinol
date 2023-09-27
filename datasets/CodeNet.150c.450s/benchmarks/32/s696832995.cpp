#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int m,n_min,n_max;

    while(cin>>m>>n_min>>n_max,m){
        vector<int> V(m);
        for(int i=0;i<m;i++) cin>>V[i];
        sort(V.begin(), V.end(),greater<int>());
        int ans=-1;
        int gap=0;
        for(int i=n_min-1;i<n_max;i++){
            if(V[i+1]==V[i]) continue;
            if(V[i]-V[i+1]>=gap){
                gap=V[i]-V[i+1];
                ans=i+1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
