#include <bits/stdc++.h>  
 
using namespace std;
 
#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

struct Vector {
	double x;
	double y;
};

#define Vectex Vector;

Vector sub_vector(const Vector& a, const Vector&b) {
	Vector ret;
	ret.x = a.x - b.x;
	ret.y = a.y - b.y;
	return ret;
}

int main() {
	double x1, y1, x2, y2, x3, y3, px, py; 
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> px >> py) {
		Vector A, B, C, P;
		A.x = x1; A.y = y1;
		B.x = x2; B.y = y2;
		C.x = x3; C.y = y3;
		P.x = px; P.y = py;

		Vector AB = sub_vector(B, A);
		Vector BP = sub_vector(P, B);
		Vector BC = sub_vector(C, B);
		Vector CP = sub_vector(P, C);
		Vector CA = sub_vector(A, C);
		Vector AP = sub_vector(P, A);

		double c1 = AB.x * BP.y - AB.y * BP.x;
		double c2 = BC.x * CP.y - BC.y * CP.x;
		double c3 = CA.x * AP.y - CA.y * AP.x;

		if((c1 > 0 && c2 > 0 && c3 > 0) || (c1 < 0 && c2 < 0 && c3 < 0)) printf("YES\n");
		else printf("NO\n"); 
	}	
	return 0;
}