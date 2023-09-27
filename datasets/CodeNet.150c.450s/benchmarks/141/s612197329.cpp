#include <iostream>
using namespace std;

struct TPoint
{
	double x;
	double y;
};

double GetCrossProduct(const TPoint& V1, const TPoint& V2)
{
	return V1.x * V2.y - V1.y * V2.x;
}

TPoint Vector(const TPoint& P1, const TPoint& P2)
{
	return {P2.x - P1.x, P2.y - P1.y};
}

bool IsSameSide(const TPoint& P1, const TPoint& P2, const TPoint& L1, const TPoint& L2)
{
	return GetCrossProduct(Vector(L1, P1), Vector(L1, L2)) * GetCrossProduct(Vector(L1, P2), Vector(L1, L2)) > 0;
}

int main()
{
	while(true){
		TPoint A1, A2, A3, Ap;
		cin >> A1.x >> A1.y >> A2.x >> A2.y >> A3.x >> A3.y >> Ap.x >> Ap.y;
		if(cin.eof() == true) break;
		if(IsSameSide(A3, Ap, A1, A2) && IsSameSide(A1, Ap, A2, A3) && IsSameSide(A2, Ap, A3, A1)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}