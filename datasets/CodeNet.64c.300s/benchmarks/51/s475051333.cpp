#include <cmath>
#include <iostream>
#include <cstdio>
#include <ctype.h>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <iomanip>
#include <set>
#include <stack>
#include <queue>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	int n;
	long ans;
	
	cin >> n;
	ans = n;
	for (int i=n-1; i>=2; i--)
	{
		ans *= i;
	}
	
	cout << ans << endl;
}