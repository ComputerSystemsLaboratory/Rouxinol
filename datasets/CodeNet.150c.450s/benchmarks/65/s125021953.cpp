#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int N,d[36],ds[36],temp,minj,ch=0;
	char c[36],cs[36],ctemp;
	
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf(" %c%d",&c[i],&d[i]);
		cs[i]=c[i];
		ds[i]=d[i];
		//printf("%d\n",i);
	}
	/*
	for(int i=0;i<N;i++){
		printf("%c%d\n",c[i],d[i]);
	}*/
	//BubbleSort
	for(int i=0;i<N;i++){
		for(int j=N-1;j>=i+1;j--){
			if(d[j]<d[j-1]){
				temp = d[j];
				d[j] = d[j-1];
				d[j-1] = temp;
				ctemp = c[j];
				c[j] = c[j-1];
				c[j-1] = ctemp;
			}
		}
	}
	printf("%c%d",c[0],d[0]);
	for(int i=1;i<N;i++){
		printf(" %c%d",c[i],d[i]);
	}
	printf("\nStable\n");
	//SelectionSort
	for(int i=0;i<N;i++){
		minj = i;
		for(int j=i;j<N;j++){
			if(ds[j]<ds[minj]){
				minj = j;
			}
		}
		temp = ds[i];
		ds[i] = ds[minj];
		ds[minj] = temp;
		ctemp = cs[i];
		cs[i] = cs[minj];
		cs[minj] = ctemp;
	}
	printf("%c%d",cs[0],ds[0]);
	if(cs[0]!=c[0]||ds[0]!=d[0])
	ch=1;
	for(int i=1;i<N;i++){
		printf(" %c%d",cs[i],ds[i]);
		if(cs[i]!=c[i]||ds[i]!=d[i])
		ch=1;
	}
	if(ch==0)
	printf("\nStable\n");
	else
	printf("\nNot stable\n");
}