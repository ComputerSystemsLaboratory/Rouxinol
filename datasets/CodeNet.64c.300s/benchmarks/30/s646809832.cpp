#include<iostream>

using namespace std;

int input,oturi,output; 

int main(){
	while(1){
		oturi=0;
		output=0;
		cin>>input;
		if(input==0) break;
		oturi=1000-input;
		if(oturi>=500){
			output+=oturi/500;
			oturi-=oturi/500*500;
		}
		if(oturi>=100){
			output+=oturi/100;
			oturi-=oturi/100*100;
		}
		if(oturi>=50){
			output+=oturi/50;
			oturi-=oturi/50*50;
		}
		if(oturi>=10){
			output+=oturi/10;
			oturi-=oturi/10*10;
		}
		if(oturi>=5){
			output+=oturi/5;
			oturi-=oturi/5*5;
		}
		if(oturi>=1){
			output+=oturi/1;
			oturi-=oturi/1*1;
		}
		cout<<output<<endl;
	}
	return 0;
}