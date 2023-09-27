#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
int main(){
	cout<<shosu(3);
	double a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f){
		double tmp=a*e-b*d;
		double ansx=(c*e-b*f)/tmp;
		double ansy=(a*f-c*d)/tmp;
		if(ansx==-0) ansx=0;
		if(ansy==-0) ansy=0;
		cout<<ansx<<' '<<ansy<<endl;
	}
}