#include <iostream>
using namespace std;

struct TCoordinate
{
	double x;
	double y;
};

bool IsSameSide(TCoordinate T1, TCoordinate T2, TCoordinate L1, TCoordinate L2)
{
	double CrossProductT1 = (L2.x - L1.x) * (T1.y - L1.y) - (L2.y - L1.y) * (T1.x - L1.x);
	double CrossProductT2 = (L2.x - L1.x) * (T2.y - L1.y) - (L2.y - L1.y) * (T2.x - L1.x);
	if(CrossProductT1 * CrossProductT2 > 0){
		return true;
	}else{
		return false;
	}
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