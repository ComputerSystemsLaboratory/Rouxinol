#include<iostream>
using namespace std;
int main(){
	int str[10000],i;
	str[1]=1;
	for(int i=1;i<i+1;i++){
		cin>>str[i];
		if(str[i]==0){
			for(int a=1;a<i;a++){
				cout<<"Case "<<a<<": "<<str[a]<<endl;
			}
			break;
		}
	}
	
	
	return 0;
}