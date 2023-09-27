#include <iostream>
 
using namespace std;
 
int main()
{
int h=0, m=0, s=0;
 
cin >>h >>m;

if(h < m)
{
cout <<"a < b"<<endl;
}
else if(h > m)
{
cout <<"a > b"<<endl;
}
else
{
cout <<"a == b"<<endl;
}
 
return 0;
}