#include<iostream>
#include<string>
using namespace std;
int main(){
	long long e,best;
	while(true){
	cin>>e;
	if(e==0)
		break;
	best=e;
	for(int i=0;i*i*i<=e;i++){
		for(int j=0;j*j<=e;j++){
			if(i*i*i+j*j<=e&&i+j+e-i*i*i-j*j<best)
				best=i+j+e-i*i*i-j*j;
		}
	}
	cout<<best<<endl;
	}
    return 0;
}