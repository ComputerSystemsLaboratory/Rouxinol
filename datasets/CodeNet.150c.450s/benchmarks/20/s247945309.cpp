#include <iostream>
using namespace std;
int main()
{
int S,s,m,h;
cin>>S;
h=S/3600;
m=S%3600/60;
s=S-3600*h-m*60;
cout<<h<<":"<<m<<":"<<s<<"\n";
return 0;
}