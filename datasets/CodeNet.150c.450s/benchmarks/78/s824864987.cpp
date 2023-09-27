// 2013/06/29 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int DP[1000000];
	int DP2[1000000];
	DP[0] = 0;
	DP2[0] = 0;
	for(int i=1; i<1000000; i++){
		DP[i] = 1000000;
		DP2[i] = 1000000;
	}

	for(int i=1; ; i++){
		int p = i*(i+1)*(i+2)/6;

		if(p>=1000000)
			break;

		DP[p] = 1;

		if(p%2==1){
			DP2[p] = 1;
		}
	}
/*
	for(int i=0; i<P.size(); i++){
		cout << P[i] << endl;
	}
*/
	for(int i=0; i<1000000; i++){
		if(DP[i]!=1)
			continue;

		for(int j=0; j+i<1000000; j++){
			if(DP[j]+1<DP[j+i]){
				DP[j+i] = DP[j]+1;
			}

			if(DP2[i]==1 && DP2[j]+1<DP2[j+i]){
				DP2[j+i] = DP2[j]+1;
			}
		}
	}

	while(true){
		int n;
		cin >> n;

		if(n==0)
			break;

		cout << DP[n] << ' ' << DP2[n] << endl;
	}

	return 0;
}