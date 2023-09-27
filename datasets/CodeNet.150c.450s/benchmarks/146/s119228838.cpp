#include<cmath>
#include<iostream>
int main(){int n;double E=1e-10,a,b,c,d,e,f,g,h;std::cin>>n;while(n--){std::cin>>a>>b>>c>>d>>e>>f>>g>>h;std::cout<<((fabs((d-b)*(g-e)-(h-f)*(c-a))<E)?"YES\n":"NO\n");}}