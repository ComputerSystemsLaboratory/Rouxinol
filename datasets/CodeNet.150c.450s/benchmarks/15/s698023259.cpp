#include <iostream>
#include <set>
using namespace std;
 
int main() {
    int n,q,s,t,i,ans=0;
    cin>>n;
    set<int> S = set<int>();
    for (i=0;i<n;i++) {
        cin>>s;
        S.insert(s);
    }
    cin>>q;
    for (i=0;i<q;i++) {
        cin>>t;
        if (S.count(t)>0) {
            ans++;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}
