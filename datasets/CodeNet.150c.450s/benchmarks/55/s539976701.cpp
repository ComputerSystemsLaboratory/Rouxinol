//ITP1_8_B
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int sum,i;
	char c;
	
	for(sum=0;;sum=0){
		for(i=0;;i++){
			c=getchar();
			if(c=='\n'){
				cout<<sum<<endl;
				break;
				}
			else if(c=='0'&&i==0)
				return 0;
			sum+=c-'0';
		}
	}
	return 0;
}