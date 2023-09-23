#include<iostream>
int main() {
	int x,h,m,s ;
	std::cin >> x;
	s = x%60;
	m = (x/60)%60;
	h = x/3600;
	std::cout << h <<":" << m <<":"<< s << "\n";
}