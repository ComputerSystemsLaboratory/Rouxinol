#include<iostream>
int main(){for(float a,b,c,d,e,f,x,y;;printf("%.3f %.3f\n",x,y)){if((std::cin>>a>>b>>c>>d>>e>>f).eof())break;y=(c*d-a*f)/(b*d-a*e);x=d?f/d-e*y/d:c/a-b*y/a;}}