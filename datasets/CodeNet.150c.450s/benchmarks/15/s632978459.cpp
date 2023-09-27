#include <iostream>
using namespace std;

int main() {
	int n, q;
	cin >> n;
	int* S = new int[n+1];

	for(int i = 0; i < n; i++)
		cin >> S[i];

	cin >> q;
	int* T = new int[q];

	int count = 0;

	for(int i = 0; i < q; i++)
	{
		cin >> S[n];
		int j = 0;
		while(S[j] != S[n])
			j++;

		if(j != n)
			count++;
	}

	cout << count << endl;

	return 0;
}