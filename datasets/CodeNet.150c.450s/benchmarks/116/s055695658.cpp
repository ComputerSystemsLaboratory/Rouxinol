#include <iostream>
#include <algorithm>
using namespace std;

int data[100500];

int main(void)
{
	int n, k;
	while (1){
		cin >> n >> k;
		if(n==0&&k==0)break;
		for (int i = 1; i <= n; i++){
			cin >> data[i];
			data[i] += data[i-1];
		}
		
		int res = 0;
		for (int i = k; i <= n; i++){
			res = max(res, data[i] - data[i-k]);
	//		cout <<"*"<< i << " " << i-k << endl;
		}
	//	for (int i = 0; i <= n; i++){
	//		cout << data[i] << " ";
	//	}
	//	puts("");
		cout << res << endl;
	}
	return 0;
}