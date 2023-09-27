#include<iostream>
int main(void){
	int a,b,c,n,i;
	std::cin>>n;
	for(i=0;i<n;i++){
		std::cin>>a>>b>>c;
		if(a*a==b*b+c*c)std::cout<<"YES"<<std::endl;
		else if(b*b==a*a+c*c)std::cout<<"YES"<<std::endl;
		else if(c*c==a*a+b*b)std::cout<<"YES"<<std::endl;
		else                 std::cout<<"NO"<<std::endl;
		}



	 return 0;
	}