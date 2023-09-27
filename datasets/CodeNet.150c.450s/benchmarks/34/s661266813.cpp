#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>

#define SIZE 9

using namespace std;

int main(){
	int step[31]={0};
	int n;
	step[0] = 1;
	step[1] = 1;
	step[2] = 2;
	for(int i=3;i<=30;i++){
		step[i]=step[i-3]+step[i-2]+step[i-1];
	}
	for(int i=0;i<=30;i++){
		step[i]/=10;
	}
	while(cin>>n,n){
		if(step[n]!=0 && step[n]%365==0){
			cout<<step[n]/365<<endl;
		}else{
			cout<<step[n]/365+1<<endl;
		}
	}
	return 0;
}