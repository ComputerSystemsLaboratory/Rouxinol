#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int s=0,t=0,a,b;
for(int i=0;i<4;i++){
cin >> a;
s+=a;
}
for(int i=0;i<4;i++){
cin >> b;
t+=b;
}
if(s>=t)printf("%d\n",s);
else printf("%d\n",t);
return 0;
}