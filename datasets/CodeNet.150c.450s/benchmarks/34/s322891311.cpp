#include <iostream>

using namespace std;

int main()
{
	const int comb[] = { 0, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274, 504, 927, 1705, 3136, 5768, 10609, 19513, 35890, 66012, 121415, 223317, 410744, 755476, 1389537, 2555757, 4700770, 8646064, 15902591, 29249425, 53798080 };

//	cut here before submit 
//	freopen ("testcase.kannondou", "r", stdin );
	int n;

	while (1){
		cin >> n;

		if (n == 0 ){
			break;
		} // end if
		int num = comb[n];

		if (num >= 10 ){
			num = (num / 10) + (num % 10 != 0 ? 1 : 0 );
		} // end if

		int res = num/365 + (num % 365 != 0 ? 1 : 0 );
		cout << res << endl;
	} // end loop

	return 0;
}