#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, point[100], sum = 0, ave = 0, max = 0, min = 0;
	while( cin >> n && n != 0){

		for(int i = 0; i < n; i++)
			cin >> point[i];

		sort(point, point + n);


		for(int i = 1; i < n-1; i++){
			sum += point[i];
		}
		ave = sum / (n-2);
		cout << ave << endl;

		sum = 0;
		ave = 0;
		min = 0;
		max = 0;
	}

	return 0;
}