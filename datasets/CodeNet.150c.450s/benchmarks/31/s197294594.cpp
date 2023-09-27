#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int n,r,minv,maxv=INT_MIN;
    cin>>n>>r;
    minv=r;
    for(int i=1;i<n;++i){
        cin>>r;
        maxv=max(maxv,r-minv);
        minv=min(minv,r);
    }
    cout<<maxv<<endl;
    return 0;
}
