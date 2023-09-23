#include<iostream>
using namespace std;

int main() {
	int n, x,i,j,k,l,sum,count_up=0, box[100] = {};
	while(1){
	cin >> n >> x;
	if (n == 0 && x == 0) {
		break;
	}
	for (i = 0; i < n; i++) {
		box[i] = i+1;
	}
	for (j = 0; j < n-2; j++) {
		for (k = j+1; k < n - 1; k++) {
			for (l = k+1; l < n; l++) {
				sum = box[j] + box[k] + box[l];
					if(sum == x) {
						count_up += 1;
					}
			}
		
		}
	}
		cout << count_up << endl;
		count_up = 0;
	}
	return 0;
}
