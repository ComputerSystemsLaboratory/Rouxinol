#include <iostream>
using namespace std;

int main(){
	int n;
	int step[35];

	step[0]=0;
	step[1]=1;
	step[2]=2;
	step[3]=4;

	for(int i=1;i<30;i++){
		step[i+3]=step[i+2]+step[i+1]+step[i];
	}
	while(cin>>n){
		if(n==0)return 0;
		if(step[n]%3650==0){
			cout<<step[n]/3650<<endl;
		}else{
			cout<<step[n]/3650+1<<endl;	
		}
	}
	return 0;
} 