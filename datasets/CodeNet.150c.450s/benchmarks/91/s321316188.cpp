#include<iostream>
using namespace std;

long long int n,p[1000010],j=0,a;
int main(){
	bool isp[1000010];							  
	for(int i=0;i<=1000009;i++){
		isp[i]=true;
	}
	isp[0]=false;
	isp[1]=false;
	for(int i=2;i<=1000010;i++){
		if(isp[i]){
			p[j]=i;
			for(int k=i*2;k<1000010;k+=i){
				isp[k]=false;
			}
		}
	}
	while(cin>>n){
		a=0;
		for(int i=1;i<=n;i++){
			if(isp[i])a++;
		}
		cout<<a<<endl;
	}
	return 0;
}