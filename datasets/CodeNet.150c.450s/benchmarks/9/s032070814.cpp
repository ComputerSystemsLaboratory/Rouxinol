#include <iostream>
#include <string>

using namespace std;

int count[26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str, tmp;
    int m, h;
    while(cin>>str) {
        if(str=="-") break;
        cin>>m;
        for(int i=0; i<m; i++) {
            cin>>h;
            tmp=str;
            str=tmp.substr(h)+tmp.substr(0, h);
        }
        cout<<str<<'\n';
    }
    return 0;
}