// 2020/07/30 Tazoe

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int a[100000];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int DP[100001];
	DP[0] = -1;
	for(int i=1; i<=n; i++){
		DP[i] = 1000000001;
	}
	int L = 0;
	
	for(int i=0; i<n; i++){
		if(DP[L]<a[i]){
			L++;
			DP[L] = a[i];
		}
		else{
			for(int j=L; j>=1; j--){
				if(DP[j-1]<a[i] && DP[j]>=a[i]){
					DP[j] = a[i];
					break;
				}
			}
		}
	}
	
	cout << L << endl;
	
	return 0;
}

