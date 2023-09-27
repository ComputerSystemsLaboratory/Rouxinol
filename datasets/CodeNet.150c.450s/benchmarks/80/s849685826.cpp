#include <iostream>

using namespace std;

int main()
{ int a,b,c,d,A,B,C,D;
cin>>a>>b>>c>>d;
cin>>A>>B>>C>>D;
if(a+b+c+d>=A+B+C+D){cout<<a+b+c+d<<"\n";}
else{cout<<A+B+C+D<<"\n";}
 return 0;
}