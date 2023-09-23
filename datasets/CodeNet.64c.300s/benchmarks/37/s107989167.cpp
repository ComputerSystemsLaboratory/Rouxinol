#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void){
	while(true){
		int n;
		int sum;
		int count = 0;
		cin >> n;
		if(n == 0)return 0;
		int a[n + 1];
		for(int i = 1; i <= n; i ++){
			a[i] = i;
		}

		for(int i = 1; i <= n/2; i++){
			sum = i;
			for(int j = i + 1; sum < n; j++){
				sum += j;
			}
			if(sum == n) count++;
		}
		cout << count << endl;



	}
	return 0;
}
