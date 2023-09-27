#include<iostream>
using namespace std;
int main()
{
int a,b;
char c;
int cong=0,tru=0,nhan=0;
double chia;
for(int i=1;;i++){
cin>>a>>c>>b;
if(c == '?') break;
if(c == '+'){ cong = a + b ;cout<<cong<<endl;}
else if(c == '-'){tru = a - b;cout<<tru<<endl;}
else if(c == '*'){nhan = a * b;cout<<nhan<<endl;}
else if(c == '/'){chia = a / b;cout<<chia<<endl;}
}
return 0;
}