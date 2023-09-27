#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    int n;
    cin>>str>>n;
    int a, b;
    string p, command;
    for(int i=0; i<n; i++) {
        cin>>command>>a>>b;
        if(command=="print") {
            cout<<str.substr(a, b-a+1)<<'\n';
        }else if(command=="reverse") {
            for(; a<b; a++, b--) {
                swap(str[a], str[b]);
            }
        }else if(command=="replace") {
            cin>>p;
            str.replace(a, b-a+1, p);
        }
    }
    return 0;
}