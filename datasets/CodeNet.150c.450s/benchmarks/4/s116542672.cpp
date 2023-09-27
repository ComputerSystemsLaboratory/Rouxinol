#include <iostream>

int main(){
	int m,f,r;
	while(true){
		char result;
		std::cin>>m>>f>>r;
		if(m==-1&&f==-1&&r==-1){
			break;
		}
		if(m+f>=80){
			result='A';
		}else if(m+f>=65){
			result='B';
		}else if(m+f>=50){
			result='C';
		}else if(m+f>=30){
			result='D';
			if(r>=50){
				result='C';
			}
		}else{
			result='F';
		}
		if(m==-1||f==-1){
			result='F';
		}
		std::cout<<result<<std::endl;
	}
	return 0;
}