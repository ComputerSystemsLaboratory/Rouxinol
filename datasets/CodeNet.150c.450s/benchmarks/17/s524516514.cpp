#include <iostream>

int main(){
	
	int a[5];
	int s[5];
	for(int r=0;r<5;r++){
		s[r]=-100000;
	}
	for(int b=0;b<5;b++){
		std::cin>>a[b];
		if(a[b]>s[0]){
			s[4]=s[3];
			s[3]=s[2];
			s[2]=s[1];
			s[1]=s[0];
			s[0]=a[b];
		}else if(a[b]>s[1]){
			s[4]=s[3];
			s[3]=s[2];
			s[2]=s[1];
			s[1]=a[b];
		}else if(a[b]>s[2]){
			s[4]=s[3];
			s[3]=s[2];
			s[2]=a[b];
		}else if(a[b]>s[3]){
			s[4]=s[3];
			s[3]=a[b];
		}else{
			s[4]=a[b];
		}
	}
	for(int q=0;q<5;q++){
		std::cout<<s[q];
		if(q!=4){
			std::cout<<" ";
		}
	}
	std::cout<<std::endl;
	return 0;
}