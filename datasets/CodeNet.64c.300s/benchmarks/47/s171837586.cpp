#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> N(101);
	int n,max=0;

	while (cin >> n){
		N[n]++;
	}

	for (int i = 0; i<N.size(); ++i){
		if (N[i] != 0)	{
			if (N[i] > max){
				max = N[i];
			}
		}
	}

	for (int i = 0; i < 100; ++i){
		if (N[i] == max)
			cout << i << endl;
	}

	return 0;
}