#include <iostream>
#include <iomanip>
#include <math.h>
#include <float.h>
using namespace std;

#ifndef M_PI
#define M_PI (4.0*atan(1.0))
#endif

int main() {
	// your code goes here
	
	int a, b, answer;
	std::string op;
	while(1){
		std::cin>>a>>op>>b;
		if(op=="+"){
			answer=a+b;
		} else if(op=="-"){
			answer=a-b;
		} else if(op=="*"){
			answer=a*b;
		} else if(op=="/"){
			answer=a/b;
		} else  if(op=="?"){
			break;
		}
		std::cout<<setprecision(16)<<answer<<std::endl;
	}
	return 0;
}