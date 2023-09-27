#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<complex>
using namespace std;

bool isin(double a, double b, double c){
	if(a>b) swap(a,b);
	if(b-a<M_PI){
		return (a<c && c<b);
	}
	else{
		return (b<c || c<a);
	}
}

int main(void){

	double a, b, c, d, e, f, g, h;

	while(cin>>a>>b>>c>>d>>e>>f>>g>>h){

	complex<double> p[4];
	p[0] = complex<double>(a,b);
	p[1] = complex<double>(c,d);
	p[2] = complex<double>(e,f);
	p[3] = complex<double>(g,h);

	double arg1, arg2, arg3;
	arg1 = arg(p[1]-p[0]);
	arg2 = arg(p[2]-p[0]);
	arg3 = arg(p[3]-p[0]);

	if(arg1<0) arg1+=2*M_PI;
	if(arg2<0) arg2+=2*M_PI;
	if(arg3<0) arg3+=2*M_PI;

	bool b0;
	b0 = isin(arg1, arg2, arg3);

	/////////////////////////

	arg1 = arg(p[0]-p[1]);
	arg2 = arg(p[2]-p[1]);
	arg3 = arg(p[3]-p[1]);

	if(arg1<0) arg1+=2*M_PI;
	if(arg2<0) arg2+=2*M_PI;
	if(arg3<0) arg3+=2*M_PI;

	bool b1;
	b1 = isin(arg1, arg2, arg3);

	/////////////////////////

	arg1 = arg(p[0]-p[2]);
	arg2 = arg(p[1]-p[2]);
	arg3 = arg(p[3]-p[2]);

	if(arg1<0) arg1+=2*M_PI;
	if(arg2<0) arg2+=2*M_PI;
	if(arg3<0) arg3+=2*M_PI;

	bool b2;
	b2 = isin(arg1, arg2, arg3);

	/////////////////////////

	if( b0 && b1 && b2 ) cout << "YES" << endl;
	else cout << "NO" << endl;

	}

	return 0;
}