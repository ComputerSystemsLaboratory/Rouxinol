#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
	int n;
	while(1){
		cin >> n;
		if(n == 0) break;
		long long int a[5000], sum = 0, hold = 0;
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		hold = a[0];
		for(int i = 0;i < n;i++){
			for(int j = i;j < n;j++){
				sum += a[j];
				if(hold < sum){
					hold = sum;
				}
			}
			sum = 0;
		}
		cout << hold << endl;

	}
	
	return 0;
}