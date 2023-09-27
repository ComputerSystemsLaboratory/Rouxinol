#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strNumber;
	long long int iNumberA=0,iNumberB,iLength[256]={0},i=0;
	
	while( cin >> iNumberA ){
		cin >> iNumberB;

		strNumber = to_string( iNumberA+iNumberB );

		iLength[i] = strNumber.length();
		i++;
	}

	for( int j=0;j<i;j++ ){
		cout << iLength[j] << endl;
	}

	return 0;
}