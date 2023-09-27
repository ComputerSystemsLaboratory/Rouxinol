#include<iostream>
int main(){for(float a,b,c,d,e,f,y,s;s=!(std::cin>>a>>b>>c>>d>>e>>f).eof();s&&printf("%.3f %.3f\n",d?f/d-e*y/d:c/a-b*y/a,y))y=c*d-a*f,y/=b*d-a*e;}