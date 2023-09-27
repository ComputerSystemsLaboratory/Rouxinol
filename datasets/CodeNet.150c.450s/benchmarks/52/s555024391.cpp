#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int car[10],order[100],i,j,k=0;
	
	for(i=0; i<10; i++){car[i]=0;}
	i=0;
	while((scanf("%d",&order[i]))!=EOF){i++;}
	for(j=0; j<i; j++){
		if(order[j]!=0){
			car[k]=order[j];
			k++;
		}else{
			k--;
			cout << car[k] << endl;
			car[k]=0;
		}
	}
}