#include <iostream>
#include <string>

using namespace std;

int count[26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s, p;
    cin>>s>>p;
    s += s;
    if(s.find(p, 0) != string::npos) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}