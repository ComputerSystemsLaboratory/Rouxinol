#include <iostream>
#include <complex>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

const double EPS = 1e-10;
const double INF = 1e12;
#define EQ(n,m) (abs((n)-(m)) < EPS)
#define X real()
#define Y imag()

typedef complex<double> P;
typedef vector<P> VP;
double dot(P a, P b){
    return (conj(a)*b).X;
}
double cross(P a, P b){
    return (conj(a)*b).Y;
}

bool isParallel(const P &a, const P &b){
    return abs(cross(a,b)) < EPS;
}
int main(){
	int n;
	cin >> n;
	for(int rep=0; rep<n; rep++){
		VP v(4);
		for(int i=0; i<4; i++){
			double x,y;
			cin >> x >> y;
			v[i] = P(x, y);
		}
		if(isParallel(v[1]-v[0], v[3]-v[2])){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}