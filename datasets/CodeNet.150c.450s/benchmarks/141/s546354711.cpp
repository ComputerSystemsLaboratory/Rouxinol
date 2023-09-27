#include <iostream>
using namespace std;

struct TCoordinate
{
	double x;
	double y;
};

double GetCrossProduct(const TCoordinate& V1, const TCoordinate& V2)
{
	return V1.x * V2.y - V1.y * V2.x;
}

bool IsSameSide(const TCoordinate& T1, const TCoordinate& T2, const TCoordinate& L1, const TCoordinate& L2)
{
	TCoordinate VectorL1T1 = {T1.x - L1.x, T1.y - L1.y};
	TCoordinate VectorL1T2 = {T2.x - L1.x, T2.y - L1.y};
	TCoordinate VectorL1L2 = {L2.x - L1.x, L2.y - L1.y};
	return GetCrossProduct(VectorL1T1, VectorL1L2) * GetCrossProduct(VectorL1T2, VectorL1L2) > 0;
}

int main()
{
	while(true){
		TCoordinate A1, A2, A3, Ap;
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