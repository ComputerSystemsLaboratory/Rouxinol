#include<iostream>
#include<algorithm>
#include <array>
int main(void){
	int a, b, c,count=0;
	std::cin >> a >> b >> c;
	for (a; a <= b; a++){
		if (c%a == 0){
			count++;
		}
	}
	std::cout << count << std::endl;
	return 0;
}