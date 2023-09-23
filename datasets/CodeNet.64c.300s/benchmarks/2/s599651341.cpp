#include <iostream>

int main() {
	int m,f,r,k;
	while(true){
	std::cin >> m >> f >> r;
	if(m==-1 && f==-1 && r==-1)break;
	if(m==-1 || f==-1){std::cout << "F" << std::endl;goto END;}
	if(m+f>=80){std::cout << "A" << std::endl;goto END;}//k=1;
	if(m+f>=65 && m+f<80){std::cout << "B" << std::endl;goto END;}//k=2;
	if(m+f>=50 && m+f<65){std::cout << "C" << std::endl;goto END;}//k=3;
	if(m+f<30){std::cout << "F" << std::endl;goto END;}//k==6;
	if(m+f>=30 && m+f<50){
		if(r>=50){
			std::cout << "C" << std::endl;goto END;//k==3;
		}else{
			std::cout << "D" << std::endl;goto END;//k==4;
		}
	}
    END:
    ;
	}
	return 0;
}