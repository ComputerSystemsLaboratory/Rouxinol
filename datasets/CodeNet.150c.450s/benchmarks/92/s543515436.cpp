#include <iostream>

using namespace std;
int main(void){

int inputA=0;
int inputB=0;
int loopT=0;
int sum[200]={};
int output=0;

for(int i=0;i<200;i++){
	inputA=0;
	inputB=0;
	cin >>inputA >>inputB;
	if(inputA+inputB!=0){
	sum[i]=inputA+inputB;
	}else{
	loopT=i;	
	i=200;
	}
}


for(int i=0;i<loopT;i++){
	output=1;
		for(int j=0;j<100;j++){
			sum[i]=sum[i]/10;
			if(sum[i]>0){
				
				output++;
			}else{
			cout <<output <<endl;
			j=100;
			}
		}
}

}