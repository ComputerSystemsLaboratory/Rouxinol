#include <iostream>

char grade(int m,int f, int r)
{
	int sum = m+f;
	if(m == -1 || f == -1){
		return 'F';
	}else if(sum>= 80){
		return 'A';
	}else if(sum >= 65){
		return 'B';
	}else if(sum >= 50){
		return 'C';
	}else if(sum >= 30){
		if(r >= 50){
			return 'C';
		}else{
			return 'D';
		}
	}else{
		return 'F';
	}
	return 'Z';//err
}

int main(int argc, char const *argv[])
{
	int m,f,r;
	while(true){
		std::cin >> m >> f >> r;
		if(m == -1 && f == -1 && r == -1) break;
		std::cout << grade(m,f,r) << std::endl;;
	}
	return 0;
}