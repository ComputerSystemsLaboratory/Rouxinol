#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int jera(int H,int **C)
{
	for(int i=0;i<H;i++){
		if(C[i][0]==C[i][1]){
			if(C[i][1]==C[i][2]){
				if(C[i][2]==C[i][3]){
					if(C[i][3]==C[i][4]){
						C[i][0]
							=C[i][1]
							=C[i][2]
							=C[i][3]
							=C[i][4] =0;
					} else {
						C[i][0]
							=C[i][1]
							=C[i][2]
							=C[i][3] =0;
					}
				} else {
					C[i][0]
						=C[i][1]
						=C[i][2] =0;
				}
			} else {
				if((C[i][2]==C[i][3])&&(C[i][3]==C[i][4])){
					C[i][2] =C[i][3] =C[i][4] =0;
				}
			}
		} else {
			if(C[i][1]==C[i][2]){
				if(C[i][2]==C[i][3]){
					if(C[i][3]==C[i][4]){
						C[i][1]
							=C[i][2]
							=C[i][3]
							=C[i][4] =0;
					} else {
						C[i][1]=C[i][2]=C[i][3]=0;
					}
				}
			} else {
				if((C[i][2]==C[i][3])&&(C[i][3]==C[i][4])){
					C[i][2] =C[i][3] =C[i][4] =0;
				}
			}
		}
	}
	return 0;
}

int jfal(int H,int **C)
{
	int flag=0;
	for(int i=0;i<H;i++){
		for(int j=0;j<5;j++){
			if(C[i][j]==0){
				for(int k=i;k>0;k--){
					if(C[k-1][j]!=0)flag=1;
					C[k][j]=C[k-1][j];
				}
				C[0][j]=0;
			}
		}
	}
	return flag;
}

int main()
{
	while(1){
		int H;
		cin >> H;
		if(H==0)break;
		int **C;
		C=(int**)malloc(sizeof(int*)*H);
		int sum=0;
		for(int i=0;i<H;i++){
			C[i]=(int*)malloc(sizeof(int)*5);
			for(int j=0;j<5;j++){ cin >> C[i][j]; sum+=C[i][j]; }
		}
		do{
			jera(H,C);
		}while(jfal(H,C));

		for(int i=0;i<H;i++){
			for(int j=0;j<5;j++){ sum-=C[i][j]; }
		}
		cout << sum << endl ;
		for(int i=0;i<H;i++){
			free(C[i]);
		} free(C);
	}

	return 0;
}