#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	while(true){
		double a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		if(cin.fail()) break;
		double x=(c*e-b*f)/(a*e-b*d);
		double y=(c*d-a*f)/(b*d-a*e);
		if(x==0) x=0;
		if(y==0) y=0;
		cout<<fixed<<setprecision(3)<<x<<" "<<y<<endl;
	}
	return 0;
}