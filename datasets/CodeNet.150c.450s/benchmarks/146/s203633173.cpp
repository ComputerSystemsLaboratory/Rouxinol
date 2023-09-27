#include <vector>
#include <iostream>
#include <valarray>
#include <string>
#include <algorithm>
#include <set>
#include <complex>
#include <cmath>
#include <cstdio>
#define fst first
#define snd second
#define rep(i,n) for(ull i = 0;i<(n);i++)
#define rep1(i,n) for(ull i = 1;i<=(n);i++)
#define revrep(i,n) for(ull i = (n-1);i>=0;i--)
#define all(n) (n).begin(),(n).end()
#define show(x) cout << "debug " << #x << ":" << x << endl;
#define showvec(x) cout << endl << "debug " << #x << ";" << endl; \
    for(ull __i = 0;__i < x.size();__i++){ \
        for(ull __j = 0;__j<x[0].size();__j++){ \
            cout << x[__i][__j] << " "; \
        } \
        cout << endl; \
    } \
    cout << endl;
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef complex<double> xy_t;
double dot_product(xy_t a, xy_t b){
	return (conj(a)*b).real();
}

double cross_product(xy_t a, xy_t b){
	return (conj(a)*b).imag();
}

const double eps = 1e-11;
int N;
int main(){
	double x[4],y[4];
	cin >> N;
	rep(_n,N){
		rep(i,4){
			cin >> x[i] >> y[i];
		}
		xy_t a,b;
		a = xy_t(x[0],y[0]) - xy_t(x[1],y[1]);
		b = xy_t(x[2],y[2]) - xy_t(x[3],y[3]);
		cout << ((abs(cross_product(a,b)) < eps) ? "YES" : "NO") << endl;
	}
	return 0;
}