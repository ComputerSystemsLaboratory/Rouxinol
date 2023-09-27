#include <iostream>
using namespace std;

int main(){
	int n,num[100];
	long long int cnt[21] = {},tmp[21]= {};
	cin >> n;
	for(int i = 0;i < n;i++) cin >> num[i];
	cnt[num[0]] = 1;
	for(int i = 1;i < n - 1;i++){
		for(int j = 0;j < 21;j++){
			if(j - num[i] >= 0) tmp[j - num[i]] += cnt[j];
			if(j + num[i] <= 20) tmp[j + num[i]] += cnt[j];
		}
		for(int j = 0;j < 21;j++) {
			cnt[j] = tmp[j];
			tmp[j] = 0;
		}
	}
	cout << cnt[num[n - 1]] << endl;
	return 0;
}