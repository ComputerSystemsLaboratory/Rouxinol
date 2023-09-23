#include<iostream>
using namespace std;
void yes()
{
    cout<<"Yes"<<endl;
}
void no()
{
    cout<<"No"<<endl;
}
int main()
{
    int w,h,x,y,r;
    cin>>w>>h>>x>>y>>r;
    if(r>x||r>y||x+r>w||y+r>h)
    {
        no();
    }
    else
    {
        yes();
    }
    
    
    return 0;
}