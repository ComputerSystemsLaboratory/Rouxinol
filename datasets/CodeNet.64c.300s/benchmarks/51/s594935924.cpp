#include<iostream>
int main(){
	int n;
	std::cin>>n;
	int a=1;
	if(n<=12){
		for(int i=1;i<=n;i++){
			a*=i;
		}
		std::cout<<a<<std::endl;
	}
	else if(n==13)std::cout<<355687428096000/16/15/14/13<<std::endl;
	else if(n==14)std::cout<<355687428096000/16/15/14<<std::endl;
	else if(n==15)std::cout<<355687428096000/16/15<<std::endl;
	else if(n==16)std::cout<<355687428096000/16<<std::endl;
	else if(n==17)std::cout<<355687428096000<<std::endl;
	else if(n==18)std::cout<<355687428096000*18<<std::endl;
	else if(n==19)std::cout<<355687428096000*18*19<<std::endl;
	else if(n==20)std::cout<<355687428096000*18*19*20<<std::endl;
	

	return 0;
}