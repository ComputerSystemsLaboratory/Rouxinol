#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	while(true){
	cin>>n;
	if(n==0)
		break;
	n=1000-n;
	int i=0;
	while(true){
		if(n==0)
			break;
		while(true){
			if(n>=500){
				n-=500;
				break;
			}
			if(n>=100){
				n-=100;
				break;
			}
			if(n>=50){
				n-=50;
				break;
			}
			if(n>=10){
				n-=10;
				break;
			}
			if(n>=5){
				n-=5;
				break;
			}
			if(n>=1){
				n-=1;
				break;
			}
			break;
		}
		i++;
	}
	cout<<i<<endl;
	}
	return 0;
}