#include <iostream>
using namespace std;

int main()
{
    float a,s,d,f,g,h,j,k;
    float q,w,e,r;
        int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>s>>d>>f>>g>>h>>j>>k;
        q=d-a;
    w=f-s;
    e=j-g;
    r=k-h;
        float key=q*r-w*e;
        if(!key)cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
    return 0;
}