#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main(){
	int n;

	while (cin >> n){

		double ans = 1;

		while (n){
			ans *= n;
			n--;
		}

		printf("%.0f\n", ans);
	}

	return 0;
}