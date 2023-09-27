#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char w[10],t[1000],c[]="END_OF_TEXT";
	int count=0,i,i2;
	cin>>w;
	while(1){
		cin>>t;
		if(strstr(t,c)!=NULL){break;}
		for(i=0;t[i]!='\0';i++){
			if(t[i]-'a'<0){
				t[i]=t[i]+32;
			}
		}
		if((strlen(w))==(strlen(t))){
			if(strstr(t,w)!=NULL){
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}