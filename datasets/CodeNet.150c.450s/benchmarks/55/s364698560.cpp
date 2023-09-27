#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string x;
    int sum, len;
    while(cin>>x) {
        if(x=="0") break;
        sum=0;
        len = x.length();
        for(int i=0; i<len; i++) {
            sum+=x[i]-'0';
        }
        cout<<sum<<'\n';
    }
    return 0;
}