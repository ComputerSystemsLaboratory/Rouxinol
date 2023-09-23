#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <stack>

using namespace std;

int minimum=-1;


int main(){
	int n,row,num,col;
	scanf("%d",&n);
	int table[n][n];
	for(int i=0;i<n;i++){
		for(int k=0;k<n;k++){
			table[i][k] = 0;
		}
	}

	for(int i=0;i<n;i++){
		scanf("%d %d",&row,&num);
		for(int k=0;k<num;k++){
			scanf("%d",&col);
			table[row-1][col-1]=1;
		}
	}

	for(int i=0;i<n;i++){
		for(int k=0;k<n-1;k++){
			printf("%d ",table[i][k]);
		}
		printf("%d\n",table[i][n-1]);
	}

    return 0;
}