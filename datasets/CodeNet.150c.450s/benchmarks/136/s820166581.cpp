#include<iostream>

using namespace std;

int GCD(int c, int d)
{
    int m;
    
    while(d != 0)
    {
        m = c % d;
        c = d;
        d = m;
    }
    
    return c;
}

int LCM(int c, int d)
{
    int lcmValue;
    lcmValue = (c / GCD(c, d)) * d;  //  not %
    
    return lcmValue;
}
  
int main()
{  
    int a, b;
    
    while(cin>>a>>b)
    {
        cout<<GCD(a, b)<<" "<<LCM(a, b)<<endl; 
    }
    
    return 0;
}