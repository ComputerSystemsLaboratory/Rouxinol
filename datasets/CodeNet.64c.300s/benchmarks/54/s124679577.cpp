// 2011/09/25 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int n[100];
	for(int i=0; i<N; i++)
		cin >> n[i];

	long long DP[21];
	for(int i=0; i<=20; i++)
		DP[i] = 0;
	DP[n[0]] = 1;

	for(int i=1; i<N-1; i++){
		long long T[21];
		for(int j=0; j<=20; j++)
			T[j] = DP[j];

		for(int j=0; j<=20; j++)
			DP[j] = 0;

		for(int j=0; j<=20; j++){
			if(j+n[i]>=0&&j+n[i]<=20)
				DP[j+n[i]] += T[j];
			if(j-n[i]>=0&&j-n[i]<=20)
				DP[j-n[i]] += T[j];
		}
	}

	cout << DP[n[N-1]] << endl;

	return 0;
}