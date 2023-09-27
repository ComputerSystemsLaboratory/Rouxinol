#include <iostream>

using namespace std;

int cut(int n, int r, int s[60]){
	int p, c;
	int temp[60] = {0};

	for(int i = 0;i < r;i++){
		cin >> p >> c;
		for(int j = 0;j <= n;j++){
			temp[j] = s[j];
		}
		for(int j = 0;j < p;j++){
			s[n - p - c + j + 2] = temp[n - p + j + 2];
		}
		for(int j = 0;j < c;j++){
			s[n - c + 1 + j] = temp[n - p - c + j + 2];
		}
	}

	return s[n];
}

int main(){
	int n, r, p, c, s[60];
	while(1){
		cin >> n >> r;
		if(n == 0 && r == 0) break;

		for(int i = 0;i <= n;i++){
			s[i] = i;
		}

		int ans = cut(n, r, s);

		cout << ans << endl;
	}

	return 0;
}