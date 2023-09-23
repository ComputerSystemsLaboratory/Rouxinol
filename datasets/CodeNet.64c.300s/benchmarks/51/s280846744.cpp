#include <algorithm>
#include <deque>
#include <iostream>
#include <functional>

using namespace std;

int main()
{
	int num,i;
	cin >> num;
	long long ret = 1;
	for( i = 1; i <= num; i++ ) {
		ret *= i;
	}

	cout << ret << endl;
	return 0;
}