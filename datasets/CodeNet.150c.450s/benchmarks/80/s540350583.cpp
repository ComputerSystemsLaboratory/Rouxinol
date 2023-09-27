#include <iostream>
int main(){int a,b,c,d,e;std::cin>>a>>b>>c>>d;e=a+b+c+d;std::cin>>a>>b>>c>>d;a=a+b+c+d;std::cout<<((a>e)?a:e)<<"\n";}