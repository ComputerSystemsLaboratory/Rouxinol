#include <iostream>
#include <array>

std::array<u_int, 100> stack;
int point=0;

void push(int p){
	stack[point]=p;
	++point;
}

void pop(){
	--point;
	std::cout << stack[point] << std::endl;
}

int main(){
	int num;

	while(std::cin >> num){
		if(num == 0 && point > 0) pop();
		else if(0 < num && num <= 10) push(num);
	}

    return 0;
}
