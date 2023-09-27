#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    int st[100];
    int sn=0;
    while(cin>>t){
        if(t==0) cout<<st[--sn]<<'\n';
        else st[sn++]=t;
    }
    return 0;
}