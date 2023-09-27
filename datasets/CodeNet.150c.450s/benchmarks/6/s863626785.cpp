#include <iostream>
 
using namespace std;
 
int main()
{
int h=0, m=0, s=0;
 
cin >>h >>m >>s;

if(h < m && m < s)
{
cout <<"Yes"<<endl;
}
else
{
cout <<"No"<<endl;
}
 
return 0;
}