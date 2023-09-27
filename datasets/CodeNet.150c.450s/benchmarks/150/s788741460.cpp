#include <iostream>
using namespace std;

int main() {
	int n,ret,cnt[10001]={0};
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> ret;
		cnt[ret]++;
	}

	for(int i = 1; i < 10001; i++)
		cnt[i] += cnt[i-1];

	for(int i = 0, j = 0; i < n; i++){
		while(i == cnt[j]) j++;
		
		cout << j;
		if(i == (n-1)); else cout << " ";
		
	}
	cout << endl;
}