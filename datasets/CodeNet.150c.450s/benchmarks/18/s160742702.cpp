#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int debt=100000;
    for(int i=0; i<n; i++){
        debt=debt/20*21+999;
        debt-=debt%1000;
    }
    cout<<debt<<'\n';
    return 0;
}