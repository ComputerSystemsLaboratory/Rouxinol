#include <iostream>
#include <stdio.h>

using namespace std;

static const int N = 100;
void output(int list[],int n,int swap_number);

void bubble_sort(int list[],int n){
	bool flag = true;
	int swap_number = 0;
	while(flag){
		flag = false;
		for(int i = n - 1; i > 0; i-- ){
			if( list[i] < list[i - 1] ){
				int tmp = list[i - 1];
				list[i - 1] = list[i];
				list[i] = tmp;
				swap_number++;
				flag = true; 
			}
		}
	}

	output(list,n,swap_number);
}

void output(int list[],int n,int swap_number){

	for(int i = 0; i < n; i++){
		if(i == n - 1){
			printf("%d\n", list[n - 1]);
		}else{
			printf("%d ", list[i]);
		}
	}
	cout << swap_number << endl;
}


int main(void){
	int list[N],n;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> list[i];
	}

	bubble_sort(list,n);

	return 0;
}