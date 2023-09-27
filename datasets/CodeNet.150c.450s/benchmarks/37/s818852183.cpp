#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	double a , b , c , d , e , f ,ans1 , ans2;
	while(cin>>a>>b>>c>>d>>e>>f){
		ans1=(double)((c*e-b*f)/(a*e-b*d));
		ans2=(double)((c*d-a*f)/(b*d-a*e));
		if (ans1==0) ans1=0;
		if (ans2==0) ans2=0;
		printf("%.3f %.3f\n" , ans1 , ans2);
	}
	return 0;
}