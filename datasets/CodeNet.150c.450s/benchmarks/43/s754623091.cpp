#include<iostream>

int main(){
	while(1){
		int n,A,B,Ap=0,Bp=0;
		std::cin>>n;
		if(n==0)
			break;
		for(int i=0;i<n;++i){
			std::cin>>A>>B;
			if(A>B)
				Ap+=A+B;
			else if(A==B){
				Ap+=A;
				Bp+=B;
			}
			else Bp+=A+B;
		}
		std::cout<<Ap<<' '<<Bp<<std::endl;
	}
	return 0;
}