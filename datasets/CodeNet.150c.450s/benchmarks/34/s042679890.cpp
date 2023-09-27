#include <stdio.h>
#include <iostream>
#include <string>



int main(void){
	
	int *num,t=0,a[4];
	a[0] = 0, a[1] = 1;
	int ans;
	num = new int[1000];

	do{
		std::cin >> num[t];
		t++;
	} while (num[t - 1] != 0);

	t = 0;
	while (num[t] != 0){
		a[0] = 0; a[1] = 0, a[2] = 1;
		for (int i = 0; i < num[t]; i++){
			a[3] = a[2] + a[1]+a[0];
			a[0] = a[1];
			a[1] = a[2];
			a[2] = a[3];
		}
		std::cout << (int)a[3]/365/10+1<<std::endl;
		t++;
	}


	return 0;
}