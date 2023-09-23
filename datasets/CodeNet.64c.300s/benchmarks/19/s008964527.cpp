#include <iostream>

using namespace std;

int main()
{
	int num;

	while( cin >> num ) {
		if (num == 0 )
			break;

		long int tmpsum = 0;
		long int currnum;
		long int maxnum = -999999999;
		for( int i = 0; i < num; i++ ) {
			cin >> currnum;

			if( currnum + tmpsum > maxnum ) {
				maxnum = currnum + tmpsum;
			}
			
			if( currnum + tmpsum > 0 )
				tmpsum += currnum;
			else
				tmpsum = 0;
		}
		cout << maxnum << endl;
	}
	return 0;
}