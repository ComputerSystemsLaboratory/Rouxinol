#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int count,count2=0,ans[1000]={0};
	char number[1000];
	while(1){
		scanf("%s",&number);
		for(count=0;number[count]!='\0';count++){
			ans[count2]+=(number[count]-'0');
		}
		if(ans[count2]==0){break;}
		count2++;
	}
	for(count=0;count<count2;count++){
		cout<<ans[count]<<endl;
	}
	return 0;
}