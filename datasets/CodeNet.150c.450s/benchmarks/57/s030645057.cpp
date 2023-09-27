#include <iostream>

int main(){
int a,b,z;
char op;

while(1){
	std::cin >> a >> op >> b;

	if( op == '?'){
		break;
	}

	if( op == '+' ){
		z=a+b;
	}
	else if( op == '-'){
		z=a-b;
	}
	else if( op == '*'){
		z=a*b;
	}
	else if( op == '/'){
		z=a/b;
	}
	std::cout << z << std::endl;
}



return 0;
}