#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int d;
	int n;


	while (scanf("%d",&d) != EOF){
		n = 600 / d;
		int sum = 0;

		for (int i = 0; i < n; i++){
			int f;
			f = (i*d)*(i*d);
			sum += f*d;
		}
		cout << sum << endl;
	}
	return 0;

}