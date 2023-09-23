#include<iostream>

int main(){
	int a[3];
	int tmp;
	int i,j;
	for (i = 0; i < 3; i++){
		std::cin >> a[i];
	}
	for (i = 0; i < 2; i++){
		for (j = i; j < 3; j++){
			if (a[i] > a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	std::cout << a[0] << " " << a[1] << " " << a[2] << '\n';

}