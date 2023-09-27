#include <iostream>

int main() {
	int a,b,c,count;
	count=0;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    for ( ;a<=b;a++){
     if (c%a==0){
     	count++;
     }
    }
	if (a>b){
		std::cout << count << std::endl;
	}
	return 0;
}