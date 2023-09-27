#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <stack>

using namespace std;

int common_time=1,n;

int table[101][101],time_table[101][2];

void func(int node){
	if(time_table[node][0] == 0){
		time_table[node][0] = common_time++;
	}else{
		return;
	}
	for(int i=1;i<=n;i++){
		if(table[node][i] == 1){
			func(i);
		}
	}
	time_table[node][1] = common_time++;
}

int main(){
	int row,num,col;
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			table[i][k]=0;
		}
		time_table[i][0]=0;
		time_table[i][1]=0;
	}

	for(int i=1;i<=n;i++){
		scanf("%d %d",&row,&num);
		for(int k=1;k<=num;k++){
			scanf("%d",&col);
			table[row][col]=1;
		}
	}

	for(int i=1;i<=n;i++){
		func(i);
	}

	for(int i=1;i<=n;i++){
		printf("%d %d %d\n",i,time_table[i][0],time_table[i][1]);
	}

    return 0;
}