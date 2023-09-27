#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <numeric>
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <fstream>
using namespace std;
#define EPS 1e-9
int main()
{
//	cut here before submit 
//	freopen("testcase.pl", "r", stdin);
	string str = "";
	int n;

	getline (cin, str );
	stringstream ssn(str);
	ssn >> n;

	int i,j;
	for (i = 0; i < n; ++i){
		vector <double> px (4, 0.0);
		vector <double> py (4, 0.0);
		getline (cin, str );
		stringstream ss(str);
		for (j = 0; j < 4; ++j){
			ss >> px[j] >> py[j];
//			cout << "p[" << j << "]: (" << px[j] << ',' << py[j] << ')' << endl;
		} // end for
		vector <double> vx (2, 0.);
		vector <double> vy (2, 0.);

		
		for (j = 0; j < 2; ++j){
			vx[j] = px[2*j + 1] - px[2*j];
			vy[j] = py[2*j + 1] - py[2*j];
//			cout << "v[" << j << "]: (" << vx[j] << ',' << vy[j] << ')' << endl;
		} // end for

		double D = vx[0]*vy[1] - vy[0]*vx[1];
		if (fabs(D) < EPS ){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		} // end if


	} // end for
		
	return 0;
}