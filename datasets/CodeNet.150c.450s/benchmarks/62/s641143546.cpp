#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b)
        swap(a,b);
    if(c>=b)
        cout<<a<<" "<<b<<" "<<c<<endl;
    else if(c<=a)
        cout<<c<<" "<<a<<" "<<b<<endl;
    else
        cout<<a<<" "<<c<<" "<<b<<endl;
}
