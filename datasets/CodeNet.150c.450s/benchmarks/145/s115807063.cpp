#include<iostream>
#include<cstdio>
#include<cmath>
#include <string> 
#include <string.h>
#include <utility>
using namespace std;


int main(){
	string str;
	char word[1010][35];
	int x=0,y=0,i=0,j,length=0,maxl=0,maxq[35],q,p=0;maxq[0]=0;
	getline(cin,str);
	while(1){
		if(str[i]==' '){
			word[y][x]='\0';
			x=0;
			y++;
		}
		else if(str[i]=='\0'){
			word[y][x]='\0';
			word[y+1][0]='\0';
			break;
		}
		else{
			word[y][x]=str[i];
			x++;
		}
		i++;
	}
	for(i=0;i<y;i++){
		for(j=0;j<y-i;j++){
			if(strcmp(word[j],word[j+1])>0){
				for(x=0;x<35;x++){
					swap(word[j][x],word[j+1][x]);
				}
			}
		}
	}
	for(i=0;i<=y;i++){
		for(j=0;word[i][j]!='\0';j++){}
		if(maxl<j){
			maxl=j;
			length=i;
		}
		if(strcmp(word[i],word[i+1])==0){
			maxq[i+1]=maxq[i]+1;
		}
		else{
			maxq[i+1]=0;
		}
	}
	for(i=0;i<=y;i++){
		if(p<maxq[i]){
			p=maxq[i];
			q=i;
		}
	}
	printf("%s %s\n",word[q],word[length]);
	return 0;
}