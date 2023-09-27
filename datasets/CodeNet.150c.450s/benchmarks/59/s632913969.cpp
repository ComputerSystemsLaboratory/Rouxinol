#include <bits/stdc++.h>
using namespace std;
int p,n,j,oa;
int a[10000];

int main() {
    // insert code here...
    cin>>n;
    for (int w=0; w<n; w++) {
        cin>>a[w];
    }
    for (int i=0; i<n; i++) {
        
        for (j=i;j>=0&&a[j]<a[j-1]; j--) {
            oa=a[j-1];
            a[j-1]=a[j];
            a[j]=oa;
        }
        for (int z=0; z<n; z++) {
            cout<<a[z];
            if (z!=n-1) {
                cout<<' ';
            }
        }
        cout<<endl;
        
    }
    return 0;
}
