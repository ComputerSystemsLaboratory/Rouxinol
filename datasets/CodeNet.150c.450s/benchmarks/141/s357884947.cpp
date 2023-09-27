#include <iostream>
using namespace std;

struct TCoordinate
{
	double x;
	double y;
};

bool JudgeSameSide(TCoordinate T1, TCoordinate T2, TCoordinate L1, TCoordinate L2)
{
	if(L1.x == L2.x){
		if((T1.x - L1.x) * (T2.x - L2.x) > 0){
			return true;
		}else{
			return false;
		}
	}else{
		if(((L2.x - L1.x) * (T1.y - L1.y) - (L2.y - L1.y) * (T1.x - L1.x)) * ((L2.x - L1.x) * (T2.y - L1.y) - (L2.y - L1.y) * (T2.x - L1.x)) > 0){
			return true;
		}else{
			return false;
		}
	}
}

int main()
{
	bool SameSideFlagA1A2, SameSideFlagA2A3, SameSideFlagA3A1;
	while(true){
		TCoordinate A1, A2, A3, Ap;
		cin >> A1.x >> A1.y >> A2.x >> A2.y >> A3.x >> A3.y >> Ap.x >> Ap.y;
		if(cin.eof() == true) break;
		SameSideFlagA1A2 = JudgeSameSide(A3, Ap, A1, A2);
		SameSideFlagA2A3 = JudgeSameSide(A1, Ap, A2, A3);
		SameSideFlagA3A1 = JudgeSameSide(A2, Ap, A3, A1);
		if(SameSideFlagA1A2 == true && SameSideFlagA2A3 == true && SameSideFlagA3A1 == true){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}