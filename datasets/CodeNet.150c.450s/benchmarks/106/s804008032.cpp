#include <iostream>

int main() {
	int a,b,c;
	int num=0;
	std::cin >> a >> b >> c;
	while(a<=b){
		if(c%a==0){
			num=num+1;
		}
		a=a+1;
	}
	std::cout << num << std::endl;
	return 0;
}

//if(c%a==0){ num++;}