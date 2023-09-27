#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define REP(i,N) for(int i = 0; i < (int)N; i++)

double det(double a1,double a2,double a3,double a4){
	return a1*a4-a2*a3;
}

int main(){
	double a,b,c,d,e,f;
	while(cin >> a >> b >> c >> d >> e >> f){
		double g,h,i;
		g = det(a,b,d,e);
		h = det(c,b,f,e);
		i = det(a,c,d,f);
		double j,k;
		j = h ==0 ?0:h/g;
		k = i ==0 ?0:i/g;
		j = round(j*pow(10,4))/pow(10,4);
		k = round(k*pow(10,4))/pow(10,4);
		printf("%.3f %.3f\n",j,k);
	}
	return 0;
}