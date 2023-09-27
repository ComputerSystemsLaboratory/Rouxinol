#include<iostream>
#include<algorithm>
#include<complex>
#include<iomanip>
using namespace std;
int main(){
	double a,b,c,d,e,f,x,y;
	int t=85000;
	for(int i=t;i;i--){
		for(int j=i;j;j--){
			if(i+j==2)a=0.0;
		}
	}
	while(cin>>a){cin>>b>>c>>d>>e>>f;
		x=(c*e-b*f)/(a*e-b*d),y=(c*d-a*f)/(b*d-a*e);
		if(x==-0)x=0;if(y==-0)y=0;
		cout<<fixed<<setprecision(3)<<x<<" ";
		cout<<fixed<<setprecision(3)<<y<<endl;
	}
	return 0;
}