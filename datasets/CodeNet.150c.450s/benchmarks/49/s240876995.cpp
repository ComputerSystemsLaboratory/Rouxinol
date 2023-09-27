#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    for(;;){
        int n;
        cin >> n;
        if (n==0) {
            break;
        }
        int a[n];
        for (int i=0; i<n;i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        int ans=0;
        for (int i=1;i<n-1;i++) {
            ans+=a[i];
            }
        cout<<ans/(n-2)<<"\n";
        }
}