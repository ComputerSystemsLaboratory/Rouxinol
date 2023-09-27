#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < n; ++i)

using namespace std;

int a, b, c, d, e, f;

double normalize(double x){
	if(-0.001 < x && x < 0.001){
		return 0;
	}
	return x;
}

int main(){
	while(scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) != EOF){
		double det = a * e - b * d;
		double x = (e * c - b * f) / det;
		double y = (-d * c + a * f) / det;
		printf("%.3f %.3f\n", normalize(x), normalize(y));
	}
	return 0;
}