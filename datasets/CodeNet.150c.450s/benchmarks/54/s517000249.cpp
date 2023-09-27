#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string search,target;
    cin>>target;
    int ans=0;
    while(cin>>search) {
        if(search=="END_OF_TEXT") break;
        transform(search.begin(),search.end(),search.begin(),::toupper);
        transform(target.begin(),target.end(),target.begin(),::toupper);
        if(search==target) {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}