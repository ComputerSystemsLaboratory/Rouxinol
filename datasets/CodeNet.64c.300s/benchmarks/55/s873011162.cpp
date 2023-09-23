#include<iostream>
 
int main(){
    int i=0,x=1;
    while(x!=0){
	std::cin >> x ;
	if(x!=0){
	i++;
	std::cout <<"Case "<<i<<": " << x << std::endl;
	}
    }
    return 0;
    }