#include<iostream>
using namespace std;
int d[1000000]={},p[1000000]={};
void calc(){
	for(int i=2;i<1000000;i++){
		if(d[i]==0){
			for(int j=2;j<1000000;j++){
				if(i*j>1000000) break;
					d[i*j]=1;
			}
		}
	}
	for(int i=2;i<1000000;i++){
		if(d[i]==0)
		p[i]=p[i-1]+1;
		else
		p[i]=p[i-1];
	}
}
int main(){
	calc();
	int n;
	while(cin>>n,n){
		if(cin.eof())break;
		cout<<p[n]<<endl;
	}
	return 0;
}