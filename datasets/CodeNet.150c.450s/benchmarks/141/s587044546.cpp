#include <cstdio>
using namespace std;

typedef struct P {
	double x, y;
} P;
typedef struct vec {
	double x, y;
	vec() {}
	vec(P p1, P p2) {
		x = p2.x - p1.x;
		y = p2.y - p1.y;
	}
} vec;
inline double cross(vec v1, vec v2) {
	return v1.x*v2.y - v1.y*v2.x;
}

P p[4];
vec v[3];
double a, b;
int ar[3][4] = {
	{0,1,2,3 },{1,2,0,3},{2,0,1,3}
};

int main(){
	bool f;
	while (true) {
		for (int i = 0; i < 4; i++) {
			if (scanf("%lf%lf", &p[i].x, &p[i].y) == EOF) {
				return 0;
			}
		}
		f = true;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				v[j] = vec(p[ar[i][0]], p[ar[i][j + 1]]);
			}
			a = cross(v[0], v[1]);
			b = cross(v[0], v[2]);
			if (a*b < 0) {
				printf("NO\n");
				f = false;
				break;
			}
		}
		if (f) {
			printf("YES\n");
		}
	}

	return 0;
}