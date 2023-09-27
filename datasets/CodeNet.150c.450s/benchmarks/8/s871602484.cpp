#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int taro=0, hanako=0, n;
    string tc, hc;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>tc>>hc;
        int judge=tc.compare(hc);
        if(judge<0) hanako+=3;
        else if(judge>0) taro+=3;
        else taro++, hanako++;
    }
    cout<<taro<<' '<<hanako<<'\n';
    return 0;
}