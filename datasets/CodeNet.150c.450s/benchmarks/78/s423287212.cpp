// 2013/11/15 Tazoe

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
	vector<int> T;		// 正四面体数
	for(int n=1; ; n++){
		int t = n*(n+1)*(n+2)/6;

		if(t>=1000000)
			break;

		T.push_back(t);
	}

	int DP1[1000000];	// 正四面体数の個数
	int DP2[1000000];	// 奇数の正四面体数の個数
	DP1[0] = DP2[0] = 0;
	for(int i=1; i<1000000; i++){
		DP1[i] = DP2[i] = 1000000;
	}

	for(int i=0; i<T.size(); i++){
		for(int j=T[i]; j<1000000; j++){
			DP1[j] = min(DP1[j], DP1[j-T[i]]+1);
		}

		if(T[i]%2==1){
			for(int j=T[i]; j<1000000; j++){
				DP2[j] = min(DP2[j], DP2[j-T[i]]+1);
			}
		}
	}

	while(true){
		int m;
		cin >> m;

		if(m==0)
			break;

		cout << DP1[m] << ' ' << DP2[m] << endl;
	}

	return 0;
}