#include <iostream>

using namespace std;

int cmax(int n, int count[50]){
	int max;
	for(int i = 0;i < n;i++){
		if(i == 0 || max < count[i]){
			max = count[i];
		}
	}

	return max;
}

int main(){
	int n, p;

	while(1){
		cin >> n >> p;
		if(n == 0 && p == 0) break;

		int i = 0;
		int q = p;
		int count[50] = {0};
		while(1){
			if(p == 1){
				count[i]++;
				p--;
				if(count[i] == q) break;
			} else if (p == 0){
				p += count[i];
				count[i] = 0;
			} else {
				count[i]++;
				p--;
			}

			if(i == n - 1){
				i = 0;
			} else {
				i++;
			}
		}

		cout << i << endl;
	}

	return 0;
}