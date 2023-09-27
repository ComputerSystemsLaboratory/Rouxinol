#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cfloat>

using namespace std;

int num;
long long int fac=1;

int main()
{
	cin >> num;
	
	for( int i = 1; i <= num; i++)
	{
		fac *= i;
	}
	
	cout << fac << endl;
	
	return 0;
	
}