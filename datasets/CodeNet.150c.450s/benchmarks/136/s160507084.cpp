#include <iostream>

using namespace std;
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int g;
    int n,m;
    int l;
    while(cin>>n>>m){
        if(n>=m)
            g=gcd(n,m);
        else
            g=gcd(m,n);
        l=g*(n/g)*(m/g);
        cout<<g<<" "<<l<<endl;
    }
    return 0;
}