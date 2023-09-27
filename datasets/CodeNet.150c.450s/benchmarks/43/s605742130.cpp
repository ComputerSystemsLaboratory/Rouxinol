#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n=0,iCnt=0,iPoint1=0,iPoint2=0,iNum1=0,iNum2=0;

	vector<int> iSum1(10000);
	vector<int> iSum2(10000);

	while( 1 ){
		cin >> n;
		if( n == 0 ){ break; }
		else{
			for( int i=0;i<n;i++ ){
				cin >> iNum1 >> iNum2;
				if( iNum1 > iNum2 ){ iPoint1 += iNum1+iNum2; }
				else if( iNum1 < iNum2 ){ iPoint2 += iNum1+iNum2; }
				else if( iNum1 == iNum2 ){
					iPoint1 += iNum1;
					iPoint2 += iNum2;
				}
			}
			iSum1[iCnt] = iPoint1;
			iSum2[iCnt] = iPoint2;
			iCnt++;
			iPoint1 = 0;
			iPoint2 = 0;
		}
	}

	for( int i=0;i<iCnt;i++ ){
		cout << iSum1[i] << " " <<iSum2[i] << endl;
	}

	return 0;
}