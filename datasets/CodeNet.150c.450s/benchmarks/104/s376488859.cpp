#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int w,n,a,b,z;
    char q;
    cin>>w>>n;
    vector<int> ans(n);
    for(int i=0;i<w;i++){
        ans[i]=i+1;
    }
    for(int i=0;i<n;i++){
        cin>>a>>q>>b;
        z=ans[a-1];
        ans[a-1]=ans[b-1];
        ans[b-1]=z;
    }
    for(int i=0;i<w;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}