#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
#include<iomanip>
using namespace std;

int main(){
double a,b,c,d,e,f,x,y;
while(cin>>a>>b>>c>>d>>e>>f){
	x=0.00;
	y=0.00;
	x=double((c*e-b*f)/(a*e-b*d));
	y=double((c*d-a*f)/(b*d-a*e));
	if(x==0)x=0;
	if(y==0)y=0;
	cout<<fixed<<setprecision(3)<<x<<" "<<y<<endl;
}
return 0;
}