#include<iostream>
int main(){
	int n;
	double x1,y1,x2,y2,x3,y3,x4,y4,a,b;
	std::cin>>n;
	while(n>0){
		std::cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		//y=ax+b
		//y1=a*x1+b
		//y2=a*x2+b
		//a(x1-x2)=y1-y2
		//a=(y1-y2)/(x1-x2)
		a=(y1-y2)/(x1-x2);
		b=(y3-y4)/(x3-x4);
		if(a==b)std::cout<<"YES"<<std::endl;
		else std::cout<<"NO"<<std::endl;
		n--;
	}
}