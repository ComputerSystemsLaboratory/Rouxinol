#include<iostream>
#include<stdio.h>


using namespace std;

int main(){
	int i, j,max;
	int m[10];
	for (i=0; i < 10; i++){
		cin >> m[i];
	}

	for (i = 0; i < 3; i++){
		max = 0;
		for (j = 1; j < 10; j++){
			if (m[j]>m[max]){
				max = j;
			}
		}
		printf("%d\n", m[max]);
		m[max] = -1;
	}

}