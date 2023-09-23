#include <iostream>
using namespace std;

int counting(int n, int x){
	int count = 0;
	for(int i = 1; i <= n - 2; i++){
		int sum = i;
		if (sum > x){
			break;
		}
		for(int j = i + 1; j <= n - 1; j++){
			sum = i + j;
			if(sum > x){
				break;		
			}
			for(int k = j + 1; k <= n; k++){
				sum = i + j + k;
				if(sum > x){
					break;
				}
				if(sum == x){
					count++;
					break;
				}
			}
		}
	}
	return count;
}

int main(int argc, char *argv[]){
	int n, x;
	while(1){
		cin >> n >> x;
		if(n == 0 && x == 0)break;
		cout << counting(n,x) << endl;
	}
	return 0;
}