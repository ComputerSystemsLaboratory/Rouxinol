#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct word{
	char moji[32];
	int count;
};

int main(void){
	
	struct word dt[500];
	char temp[33],max[33];
	int tempC,maxC,cou;
	bool flag=true;

	memset(dt,0,sizeof(dt));
	memset(max,'\0',sizeof(max));
	
	cou=0;
	while(scanf("%s",temp)!=EOF){
		
		tempC=strlen(temp);
		maxC=strlen(max);
		
				
		if(tempC>maxC){
			strcpy(max,temp);
		}
			
		for(int i=0;i<cou+1;i++){
			if(strcmp(dt[i].moji,temp)==0){
				dt[i].count++;
				flag=false;
				break;
			}
		}
	
		if(flag){
			strcpy(dt[cou].moji,temp);	
			cou++;
		}
		flag=true;
		memset(temp,'\0',sizeof(temp));
	}
	
	//バブルソート
	for(int i=0;i<cou;i++){
		for(int j=cou;j>i;j--){
			if(dt[j-1].count<dt[j].count){
				struct word swap;
				swap=dt[j];
				dt[j]=dt[j-1];
				dt[j-1]=swap;
			}
		}
	}

	cout<<dt[0].moji<<" "<<max<<endl;
}