#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int count[26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string w, t;
    cin>>w;
    transform(w.begin(), w.end(), w.begin(), ::toupper);
    int ans=0;
    while(cin>>t) {
        if(t=="END_OF_TEXT") break;
        transform(t.begin(), t.end(), t.begin(), ::toupper);
        if(w==t) ans++;
    }
    cout<<ans<<'\n';
    return 0;
}