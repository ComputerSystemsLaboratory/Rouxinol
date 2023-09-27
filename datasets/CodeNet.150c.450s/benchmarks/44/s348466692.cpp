#include<iostream>
using namespace std;
#include<stdio.h>


int a[4];
int b[4];
int hit;
int blow;

void format(){
	hit=blow=0;
}

int main(){
	
	int i;
	while((scanf("%d",&a[0]))!=EOF){
		format();
		for(i=1;i<4;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<4;i++){
			scanf("%d",&b[i]);
			if(a[i]==b[i]){
				hit++;
			}
		}
		
		for(i=4;i--;){
			for(int j=4;j--;){
				if((a[i]==b[j])&&(a[i]!=b[i])){
					blow++;
				}
			}
		}
		
		
		printf("%d %d\n",hit,blow);
		
	}
	
	
	
	return 0;
}