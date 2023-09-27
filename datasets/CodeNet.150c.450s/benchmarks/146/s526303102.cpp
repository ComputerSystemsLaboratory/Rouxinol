#include <iostream>
#include <algorithm>
#include <complex>

using namespace std;

typedef complex<double> P;
#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b)) < EPS)

// OÏ (cross product) : a~b = |a||b|sinÆ
double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}
// 2¼üÌ½s»è : a//b <=> cross(a, b) = 0
int is_parallel(P a1, P a2, P b1, P b2) {
  return EQ( cross(a1-a2, b1-b2), 0.0 );
}
int main(){

	int n;
	cin>>n;
	for(int j = 0; j < n; j++){
		P v[4];
		for(int i = 0; i < 4; i++){
			double x,y;
			cin>>x>>y;
			v[i] = P(x,y);
		}
		if(is_parallel(v[0],v[1],v[2],v[3])){
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}

	return 0;
}