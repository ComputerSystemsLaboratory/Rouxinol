#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> sum;
	int a, b;

	while(cin >> a >> b){
		sum.push_back(a+b);
	}

	for(int x : sum){
		int d = 1;
		x /= 10;
		while(x > 0){
			x /= 10;
			d++;
		}
		cout << d << endl;
	}

	return 0;
}