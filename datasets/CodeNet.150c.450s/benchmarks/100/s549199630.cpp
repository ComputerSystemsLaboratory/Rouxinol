#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main(){
	long long n, ans;
	cin >> n;
	ans = n;
	int i;
	for(i = n;i > 1;i--){
		if(n == 1){
			cout << n << endl;
		}
		else{
			ans = ans * (i - 1);
			
		}
	}
	cout << ans << endl;

	return 0;
}