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
		int s[n], i, sum = 0, ave = 0;
		for(i = 0;i < n;i++){
			cin >> s[i];
		}
		sort(s, s+n);
		s[0] = 0;
		s[n-1] = 0;

		for(i = 0;i < n;i++){
			sum += s[i];
		}
		ave = sum / (n-2);

		cout << ave << endl;
	}
	return 0;
}