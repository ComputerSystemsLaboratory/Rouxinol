#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int sum1[100000],n,a;
	memset(sum1,0,sizeof(sum1));
	for(int i=2;i<100;i++){
		for(int j=1;j<1000;j++){
			a=((i-1)+2*j)*i/2;
			if(a<10000){
				sum1[a] += 1;
			}
		}
	}
	while(true){
		cin>>n;
		if(n==0){
			goto Exit;
		}
		else{
			cout<<sum1[n]<<endl;
		}
	}
	Exit:
	return 0;
}