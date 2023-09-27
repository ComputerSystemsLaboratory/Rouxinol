#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int d;
    while(cin>>d){
        int s=0;
        for(int i=0; i<600; i+=d) s+=i*i*d;
        cout<<s<<'\n';
    }
    return 0;
}