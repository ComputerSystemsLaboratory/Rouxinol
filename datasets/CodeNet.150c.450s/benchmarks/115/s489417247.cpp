#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

short checkTable[1001][1001];

int tmp_max=0;


void calc(int index,char pattern[],char to_search[],int to_search_length){

	for(int i=to_search_length-1;i>=0;i--){
		if(to_search[i]==pattern[index]){
			checkTable[index][i]=1;
			if(pattern[index+1]!='\0' && i < to_search_length-1){
				checkTable[index][i] = checkTable[index+1][i+1] + checkTable[index][i];
			}
		}else{
			if(i != to_search_length-1){
				if(pattern[index+1] != '\0'){
					checkTable[index][i]=(checkTable[index+1][i]>checkTable[index][i+1])
							?checkTable[index+1][i]:checkTable[index][i+1];

				}else{
					checkTable[index][i]=(checkTable[index][i+1]>0)?checkTable[index][i+1]:0;
				}
			}else{
				if(pattern[index+1] != '\0'){
					checkTable[index][i]=(checkTable[index+1][i]>0)?checkTable[index+1][i]:0;
				}else{
					checkTable[index][i] = 0;
				}
			}
		}
		tmp_max = (tmp_max >= checkTable[index][i])?tmp_max:checkTable[index][i];
	}
}

int main(){
	for(int i=0;i<1000;i++){
		for(int k=0; k < 1000; k++)checkTable[i][k]= -1;
	}

	int q,left_length,right_length;
	char left[1001],right[1001];

	scanf("%d",&q);

	for(int i=0;i<q;i++){
		left_length=0;
		right_length=0;
		scanf("%s %s",left,right);
		for(int k=0;left[k]!='\0';k++)left_length++;
		for(int k=0;right[k]!='\0';k++)right_length++;

		if(right_length>=left_length){

			for(int k=left_length-1;k>=0;k--)calc(k,left,right,right_length);
		}else{

			for(int k=right_length-1;k>=0;k--)calc(k,right,left,left_length);
		}
		printf("%d\n",tmp_max);
		tmp_max=0;
	}

    return 0;
}