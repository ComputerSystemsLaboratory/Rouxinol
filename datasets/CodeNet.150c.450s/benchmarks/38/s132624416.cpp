#include <iostream>
using namespace std;

int main()
{
	int iN, Temp;
	int iNum[3], iTrueFlag[1000];

	cin >> iN;

	for( int i=0; i<iN; i++ ){
		cin >> iNum[0] >> iNum[1] >> iNum[2];

		for( int j = 0; j < 3; j++ ){
			for( int k = j + 1; k < 3; k++ ){
				if( iNum[j] > iNum[k] ){
					Temp    = iNum[j];
					iNum[j] = iNum[k];
					iNum[k] = Temp;
				}
			}
		}

		if( (iNum[0] * iNum[0]) + (iNum[1] * iNum[1]) == (iNum[2] * iNum[2]) ) iTrueFlag[i] = 1;
		else																   iTrueFlag[i] = 0;

	}

	for( int i=0;i<iN;i++ ){
		if( iTrueFlag[i] == 1 ) cout << "YES" << endl;
		else				    cout << "NO" << endl;
	}

	return 0;
}