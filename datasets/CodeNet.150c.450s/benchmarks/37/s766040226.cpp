#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <array>
#include <stack>
#include <queue>
#include <chrono>
#include <numeric>
#include <memory.h>
#include <map>
#include <math.h>
#include <utility>


#pragma warning(disable:4996)
using namespace std;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
typedef long long Int;
const double PI = 3.141592653589793238;
const Int INF = 999999999999;
typedef pair<int, int> P;


double A[2][2];
double C[2];


int main()
{
	while (cin >> A[0][0] >> A[0][1] >> C[0] >> A[1][0] >> A[1][1] >> C[1]){
		double t = A[1][0] / A[0][0];
		A[1][0] -= A[0][0] * t;
		A[1][1] -= A[0][1] * t;
		C[1] -= C[0] * t;

		t = A[0][1] / A[1][1];
		A[0][1] -= A[1][1] * t;
		C[0] -= C[1]*t;

		printf("%.3lf %.3lf\n", C[0] / A[0][0], C[1] / A[1][1]);
	}




}