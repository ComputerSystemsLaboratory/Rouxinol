#include <bits/stdc++.h>

const static double	de_PI	= 3.14159265358979323846;
const static int	de_MOD	= 1000000007;
const static int	de_MAX	= 999999999;
const static int	de_MIN = -999999999;

struct VECTOR {
	double x;
	double y;
	double z;
};

inline VECTOR RelativePositionVector(const VECTOR A, const VECTOR B) {

	VECTOR v;
	v.x = B.x - A.x;
	v.y = B.y - A.y;
	v.z = B.z - A.z;

	return(v);

}

inline VECTOR CrossProduct(const VECTOR A,const VECTOR B) {

	VECTOR v;
	v.x = A.y*B.z - A.z*B.y;
	v.y = A.z*B.x - A.x*B.z;
	v.z = A.x*B.y - A.y*B.x;

	return(v);

}

int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	VECTOR A, B, C, P;
	A.z = B.z = C.z = P.z = 0;
	std::vector<std::string> ans;

	while (std::cin >> A.x) {

		std::cin >> A.y >> B.x >> B.y >> C.x >> C.y >> P.x >> P.y;
		
		VECTOR AB = RelativePositionVector(A, B);
		VECTOR AP = RelativePositionVector(A, P);
		VECTOR BC = RelativePositionVector(B, C);
		VECTOR BP = RelativePositionVector(B, P);
		VECTOR CA = RelativePositionVector(C, A);
		VECTOR CP = RelativePositionVector(C, P);

		VECTOR ABxAP = CrossProduct(AB, AP);
		VECTOR BCxBP = CrossProduct(BC, BP);
		VECTOR CAxCP = CrossProduct(CA, CP);

		if (ABxAP.z > 0 && BCxBP.z > 0 && CAxCP.z > 0) {
			ans.push_back("YES");
		}
		else if (ABxAP.z < 0 && BCxBP.z < 0 && CAxCP.z < 0) {
			ans.push_back("YES");
		}
		else {
			ans.push_back("NO");
		}
	}

	for (unsigned int i = 0; i < ans.size(); i++) {
		std::cout << ans[i] << std::endl;
	}

}