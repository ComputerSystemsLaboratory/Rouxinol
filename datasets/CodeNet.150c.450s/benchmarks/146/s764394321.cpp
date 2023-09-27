#include <bits/stdc++.h>
using namespace std;

typedef complex<double> P;

P in(){
	double x,y;
	cin >> x >> y;
	return P(x,y);
}
double cross(P a,P b){
	return imag(a*conj(b));
}
int main(){
	int N;
	cin >> N;
	while(N--){
		P a,b,c,d;
		a = in();
		b = in();
		c = in();
		d = in();
		if( abs(cross(a-b,c-d))<1e-12) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
		
}