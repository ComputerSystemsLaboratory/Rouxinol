#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){
	int num;
	cin >> num;
	int number[num];
	int i;
	for (i = num - 1; i >= 0; i--){
		cin >> number[i];
    }
    int j;
    for ( j = 0; j < num; j++ ){
        if ( j ) printf(" ");
        printf("%d", number[j]);
    }
    cout << endl;
}

