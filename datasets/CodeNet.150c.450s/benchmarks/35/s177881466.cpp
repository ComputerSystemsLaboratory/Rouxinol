#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long long a, maximum;
	int n;
	while (cin >> n, n){
		maximum = -1000000;
		long long S[5010] = {};
		for (int i = 1; i <= n; i++){
			cin >> a;
			S[i] = S[i - 1] + a;
		}

		for (int i = 0; i <= n; i++)
			for (int j = i + 1; j <= n; j++){
				maximum = max(maximum, S[j] - S[i]);
			}
		cout << maximum << endl;
	}
}