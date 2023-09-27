#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
int main(){

	int a,b;
	double aa,Output;
	int output;
	char op[2];
	while(1){
	cin>>a>>op>>b;
	if(strcmp(op,"+")==0){
		output=a+b;
		cout<<output<<endl;

	}else if(strcmp(op,"-")==0){
		output=a-b;
		cout<<output<<endl;

	}else if(strcmp(op,"*")==0){
		output=a*b;
		cout<<output<<endl;

	}else if(strcmp(op,"/")==0){
		aa=(double)a;
		Output=a/b;
		cout<<Output<<endl;

	}else{
		break;
	}
	}

	return 0;
}