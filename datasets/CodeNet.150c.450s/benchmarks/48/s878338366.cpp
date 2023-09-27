// AOJ 2012

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void)
{
	vector <int> data;
	for (int i = 1; i*i <= 1000000; i++){
		data.push_back(i*i);
	}

	int e;
	while (cin >> e, e){
		int ret = 1001001001;
		for (int i = 0; 0 <= e - i*i*i; i++){
			int y = sqrt(e - i*i*i);
			int x = e - i*i*i - y*y;
			ret = min(ret, x + y + i);
		}
		cout << ret << endl;
	}

	return 0;
}