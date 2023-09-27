//AOJ:Daice 1 
//??????????????£?????¬?????????????????????????\?
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>

int main(){
	//nwes
	int scube[4][6]={{2,6,3,4,1,5},{3,2,6,1,5,4},{4,2,1,6,5,3},{5,1,3,4,6,2}};
	int cube[6],kcube[6];
	char sk[102];
	
	for(int i=1;i<=6;i++)	scanf("%d",&cube[i]);
	
	scanf("%s",sk);
	
	for(int i=0;i<strlen(sk);i++){

		if(sk[i]=='N'){
			for(int j=0;j<6;j++){
				kcube[j+1]=cube[scube[0][j]];
			}
			
		}else if(sk[i]=='W'){
			for(int j=0;j<6;j++){
				kcube[j+1]=cube[scube[1][j]];
			}
		}else if(sk[i]=='E'){
			for(int j=0;j<6;j++){
				kcube[j+1]=cube[scube[2][j]];
			}
		}else if(sk[i]=='S'){
			for(int j=0;j<6;j++){
				kcube[j+1]=cube[scube[3][j]];
			}
		}
		for(int j=1;j<=6;j++) cube[j]=kcube[j];
	}
	printf("%d\n",cube[1]);
	return 0;
}