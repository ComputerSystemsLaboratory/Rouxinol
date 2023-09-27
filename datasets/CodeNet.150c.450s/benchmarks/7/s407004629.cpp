#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main(){
	int meter[10];
	int a,i,j,temp;
	char str[1024];
	for(i = 0;i < 10;i++){
		scanf("%d",&a);
		meter[i] = a;
	}


	for (i = 0; i < 10; i++) {
        for (j = 9; j > i; j--) {
            if (meter[j - 1] < meter[j]) {  
                temp = meter[j];        
                meter[j] = meter[j - 1];
                meter[j - 1]= temp;
            }
          }
     }     
	
	for(i = 0;i < 3;i++){
	printf("%d\n",meter[i]);
	}

    return 0;
}