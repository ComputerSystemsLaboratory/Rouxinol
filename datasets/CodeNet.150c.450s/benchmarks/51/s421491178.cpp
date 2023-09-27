#include <iostream>
#include <vector>
//#include <fstream>
using namespace std;

int main()
{
//	cut here before submit 
//	freopen ("testcase.yetsubmit3", "r", stdin );

	vector <bool> student (30+1, false );
	student[0] = true;

	int n, i;
	
	for (i = 0; i < 28; ++i){
		cin >> n;
		student[n] = true;
	} // end for

	for (i = 1; i <= 30; ++i){
		if (!student[i] ){
			cout << i << endl;
		} // end if
	} // end for
		
	return 0;
}