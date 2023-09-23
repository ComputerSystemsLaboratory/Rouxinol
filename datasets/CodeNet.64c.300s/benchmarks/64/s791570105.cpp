//IN THE NAME OF GOD

#include <iostream>
using namespace std;
typedef long long int ll;
int a,b;
int bmm(int x,int y){
    if(!y)
        return x;
    return bmm(y,x%y);
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>a>>b;
    if(b>a)
        swap(a,b);
    cout<<bmm(a,b)<<endl;
    return 0;
}