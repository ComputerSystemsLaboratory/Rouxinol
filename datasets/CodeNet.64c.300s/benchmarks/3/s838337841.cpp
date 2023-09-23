#include<iostream>

using namespace std;

int main(void)
{
	int n;
	while(cin >> n){
		int num[100];
		for(int i = 0; i < n; i++){
			cin >> num[i];
		}
		for(int j = 1; j <= n; j++){
			if(j < n ) cout << num[n - j] << ' ';
			else if(j == n) cout << num[n - j] << endl;
		}
	}
	return 0;
}