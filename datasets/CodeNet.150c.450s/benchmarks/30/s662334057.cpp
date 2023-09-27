#include<stdio.h>
#include <sstream>
#include <iostream>
#include <cstdlib>

using namespace std;

#define BUF_SIZE 1024
#define ARRAY_SIZE 100


void selectionSort(int array[],int n,int& change_count)
{
	int min;
	for(int i = 0; i < n-1; i++){
		min = i;	//?????????
		for(int j = i+1; j < n; j++){
			if(array[j] < array[min]){
				min = j;
			}
		}
		if(i != min){
			swap(array[i],array[min]);
			change_count++;
		}
	}

}

int main(){

	char buf[BUF_SIZE];
	int n = atoi(fgets(buf,BUF_SIZE,stdin));
	int array[ARRAY_SIZE];
	int change_count = 0;

	for(int i = 0; i < n; i++){
		cin >> array[i];
	}

	selectionSort(array,n,change_count);

	for(int i = 0; i < n; i++){
		if(i != n-1){
			printf("%d ",array[i]);
		}else{
			printf("%d\n",array[i]);
		}
	}
	printf("%d\n",change_count);
}