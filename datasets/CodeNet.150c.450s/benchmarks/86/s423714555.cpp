#include<iostream>
using namespace std;

int main(){
	int n,m,p,x[10000],sum,a;
	while(true){
		cin>>n>>m>>p;
		sum=0;
		if(n==0 && m==0 && p==0){
			break;
		}
		for(int i=1;i<=n;i++){
			cin>>x[i];
			sum += x[i];
		}
		if(x[m]!=0){
			a=sum*(100-p)/x[m];
		}
		else{
			a=0;
		}
		cout<<a<<endl;
	}
	return 0;
}