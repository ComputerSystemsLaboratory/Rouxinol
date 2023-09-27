#include <iostream>
using namespace std;

void swap(int &a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main() {
	int a,b,c, counter=0;
	std::cin>> a>>b>>c;
	for(int i=a; i<=b;i++){
		if(c % i==0) counter++;
	}
	std::cout << counter <<std::endl;
	return 0;
}