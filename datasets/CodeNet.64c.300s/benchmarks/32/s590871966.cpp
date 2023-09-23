#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){
#ifdef CIN
	ifstream cin("input.txt");
	ofstream cout("output.txt");

#endif

	int n;
	int max, min;
 long long sum;

	cin >> n;
	int a[10000];

	max = -1000000;
	min = 1000000;
	sum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];

		sum += a[i];

	}

	


	cout << min << " " << max << " " << sum << endl;






}