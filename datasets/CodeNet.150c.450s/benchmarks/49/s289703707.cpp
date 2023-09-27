#include <iostream>
#include <stdio.h>

using namespace std;

int cmax(int n, int s[200]){
	int max;
	for(int i = 0;i < n;i++){
		if(i == 0 || max < s[i]){
			max = s[i];
		}
	}
	return max;
}

int cmin(int n, int s[200]){
	int min;
	for(int i = 0;i < n;i++){
		if(i == 0 || min > s[i]){
			min = s[i];
		}
	}
	return min;
}

int main(){
	int n, sum, s[200];
	while(1){
		cin >> n;
		if(n == 0) break;
		
		sum = 0;
		for(int i = 0;i < n;i++){
			cin >> s[i];
		}
		int max = cmax(n, s);
		int min = cmin(n, s);

		for(int i = 0;i < n;i++){
			sum += s[i];
		}

		sum = sum - max - min;
		int ans = sum / (n-2);

		cout << ans << endl;
	}

	return 0;
}