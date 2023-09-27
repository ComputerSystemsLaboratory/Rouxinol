#include <iostream>
using namespace std; 
int main()
{
double a,b,c,d,e,f;
while(cin>>a>>b>>c>>d>>e>>f)
{
printf("%.3f %.3f\n", (c*e-b*f)/(a*e-b*d)+0.0001, (c*d-a*f)/(b*d-a*e)+0.0001);
}
return 0;
}