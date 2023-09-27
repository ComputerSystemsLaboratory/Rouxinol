#include <iostream>
#include <complex>
using namespace std;

typedef complex<double> P;

#define EPS (1e-10)

double cross(P a, P b){
	return (a.real() * b.imag() - a.imag() * b.real());
}

int is_intersect(P a1, P a2, P b1, P b2){
	return (cross(a2-a1, b1-a1) * cross(a2-a1, b2-a1) < EPS) &&
		(cross(b2-b1, a1-b1) * cross(b2-b1, a2-b1) < EPS);
}

int main(void){
	double x,y;
	P p[4],o;

	while(1){
		for(int i=0;i<4;i++){
			if(!(cin>>x>>y)) return 0;
			p[i] = P(x,y);
		}

		o = P((p[0].real() + p[1].real() + p[2].real()) / 3,
					(p[0].imag() + p[1].imag() + p[2].imag()) / 3);

		if(is_intersect(p[0],p[1],p[3],o) ||
			 is_intersect(p[1],p[2],p[3],o) ||
			 is_intersect(p[2],p[0],p[3],o)){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
	}
}