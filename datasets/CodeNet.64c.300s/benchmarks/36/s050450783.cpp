#include <iostream>
using namespace std;

void swap_asc(int *a, int *b){
	int temp;
	if(*a >= *b){
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

int main(void){

	int a[3];
	cin >> a[0] >> a[1] >> a[2];

	for(int i = 0; i < 3; i++){
		swap_asc(&a[0], &a[1]);
		swap_asc(&a[1], &a[2]);
	}

	for(int i = 0; i < 3; i++){
		cout << a[i];
		if( i != 2 ) cout << " ";
	}
	cout << endl;

	return 0;
}