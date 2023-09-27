#include <iostream>
#include <algorithm>

#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int n;
int a[100005];
int L[100005];
int len=1;
int main() {
    cin>>n;
    rep(i,n) cin>>a[i];
    L[0]=a[0];
    rep(i,n) if(i) {
        if(L[len-1]<a[i]) {
            L[len]=a[i];
            len++;
        }
        else {
            int pos=lower_bound(L,L+len,a[i])-L;
            L[pos]=a[i];
        }
        //cout<<len<<" : ";
        //rep(i,len) if(i) cout<<L[i]<<" ";
        //cout<<endl;
    }

    cout<<len<<endl;
    return 0;
}