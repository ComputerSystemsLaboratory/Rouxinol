#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char c[200]={0},mojiretu[100]={0};
	int i,a,count=0;
	cin>>c>>mojiretu;
	for(i=0;c[i]!='\0';i++){}
	for(a=i;a<i*2;a++){
		c[a]=c[a-i];
	}
	if(strstr(c,mojiretu)!=NULL){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}		
	return 0;
}