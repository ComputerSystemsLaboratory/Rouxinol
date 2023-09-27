#include<stdio.h>
#include<string.h>

int main(){
	int ball[10];
	int cell[2][10]={0};
	int n,i,k,cell_1=1,cell_2=1,flag[1000]={0};
	
	scanf("%d",&n);
	
	for(k=0;k<n;k++){
		for(i=0;i<10;i++)scanf("%d",&ball[i]);
		
		cell[0][0]=cell[1][0]=0;
		
		for(i=0;i<10;i++){
			if(cell[0][cell_1-1] < ball[i]){
				cell[0][cell_1]=ball[i];
				cell_1++;
			}
			else if(cell[1][cell_2-1] < ball[i]){
				cell[1][cell_2]=ball[i];
				cell_2++;
			}
			else flag[k]=1;
		}	
	cell_1=1;
	cell_2=1;
	}
	
	for(i=0;i<n;i++){
		if(flag[i]==0)printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}