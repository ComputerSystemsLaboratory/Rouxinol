#include <iostream>
#include<iomanip>
using namespace std;

double det(double a, double b, double c, double d){
	return a*d - b*c ;
}

int main() {
	// your code goes here
	
	double a,b,c,d,e,f;
	double x,y;
	while(cin>>a>>b>>c>>d>>e>>f){
		x=det(c,b,f,e)/det(a,b,d,e);
		y=det(a,c,d,f)/det(a,b,d,e);
		if(x==0){x=0;}  if(y==0){y=0;}
		cout<<fixed<<setprecision(3)<<x<<" "<<y<<endl;
	}
	return 0;
}