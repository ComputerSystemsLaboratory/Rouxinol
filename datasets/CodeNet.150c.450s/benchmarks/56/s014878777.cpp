// 2014/07/16 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a_min = 1000001;
	int a_max = -1000001;
	long long a_sum = 0;

	for(int i=0; i<n; i++){
		int a;
		cin >> a;

		if(a<a_min){
			a_min = a;
		}

		if(a>a_max){
			a_max = a;
		}

		a_sum += a;
	}

	cout << a_min << ' ' << a_max << ' ' << a_sum << endl;

	return 0;
}