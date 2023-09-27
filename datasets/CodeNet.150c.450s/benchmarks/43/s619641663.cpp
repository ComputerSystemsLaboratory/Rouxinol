#include<iostream>
using namespace std;
int main(){
	int n;
	int i,j;
	int a,b;
	int sum1,sum2;
	while(1){
		sum1=0;
		sum2=0;
		cin>>n;
		if(n==0)break;
		for(i=0;i<n;i++){
			cin>>a>>b;
			if(a>b){
				sum1=sum1+a+b;
			}
			else if(b>a){
				sum2=sum2+a+b;
			}
			else{
				sum1+=a;
				sum2+=b;
			}
		}
		cout<<sum1<<" "<<sum2<<endl;
	}
	return 0;
}
	