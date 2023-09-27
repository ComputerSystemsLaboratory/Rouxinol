#include<complex>
#include<iostream>
int main(){const double E=1e-10;int n;double x1,y1,x2,y2,x3,y3,x4,y4;std::cin>>n;while(n--){std::cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;std::cout<<((std::abs((y2-y1)*(x4-x3)-(y4-y3)*(x2-x1))<E)?"YES\n":"NO\n");}}