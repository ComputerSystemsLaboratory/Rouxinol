#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c;
    for(int i = 1; i < 3; i++)
        {
        if(a >= b)
        {
            d = a;
            a = b;
            b = d;
        }
    
        if(b >= c)
        {
            d = b;
            b = c;
            c = d;
        }
    
        if(a >= c)
        {
            d = a;
            a = c;
            c = d;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}