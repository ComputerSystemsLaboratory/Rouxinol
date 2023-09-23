#include<iostream>
int main(){
	 int x,y,p,q;
	 bool switching=true;
	 std::cin>>x>>y;
	 if(x>=y){
		while(true){
			if(switching){
				p=y;
				q=x%y;
				switching=false;
				if(q==0){
					std::cout<<y<<"\n";
					return 0;
				}
			}
			else{
			     x=q;
				 y=p%q;
				 switching=true;
				 if(y==0){
				     std::cout<<q<<"\n";
					 return 0;
				 }	
			 }
		 }
	 }
	 if(x<y){
		while(true){
			if(switching){
				p=x;
				q=y%x;
				switching=false;
				if(q==0){
					std::cout<<x<<"\n";
					return 0;
				}
			}
			else{
			     y=p;
				 x=q%p;
				 switching=true;
				 if(y==0){
				     std::cout<<p<<"\n";
					 return 0;
				 }	
			 }
		 }
	 }
	 return 0;
 }