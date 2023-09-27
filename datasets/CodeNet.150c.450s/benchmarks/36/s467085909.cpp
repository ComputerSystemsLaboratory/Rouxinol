#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

int main(){
	int ret=0;
	int sum = 0;

	while (scanf("%d", &ret) != EOF){

		for (int i = 1; i*ret <= 600-ret ;i++){
			sum += pow(i*ret,2) * ret;
		}

		cout << sum << endl;

		sum = 0;
	}

	return 0;
}