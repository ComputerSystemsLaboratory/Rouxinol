#include <iostream>
int main(){
	int a,b,c;
	int num=0;
	std::cin >> a >> b >> c;
	while(a<=b){
		if(c%a==0){
			num++;
		}
		a++;
	}
	std::cout << num <<std::endl;
}