#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{  
    long long a,b,s;
    while( cin>>a>>b )
    {
           long long dem=0;
           s=a+b;
           while(s>0)
           {
                     s=s/10;
                     dem++;
           }
           cout<<dem<<endl;
    }
}