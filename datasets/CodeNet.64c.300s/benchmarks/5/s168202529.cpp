#include<iostream>

int main(){
	
	int h0,h1,h2,h3,h4,h5,h6,h7,h8,h9,k;
	
	std::cin >>h0>>h1>>h2>>h3>>h4>>h5>>h6>>h7>>h8>>h9;
	
	if (h8>h9) k=h8, h8=h9, h9=k;
	
	if (h7>h8) k=h7, h7=h8, h8=k;
	if (h8>h9) k=h8, h8=h9, h9=k;
	
	if (h6>h7) k=h6, h6=h7, h7=k;
	if (h7>h8) k=h7, h7=h8, h8=k;
	if (h8>h9) k=h8, h8=h9, h9=k;
	
	if (h5>h7) k=h5, h5=h7, h7=k;
	if (h7>h8) k=h7, h7=h8, h8=k;
	if (h8>h9) k=h8, h8=h9, h9=k;

	if (h4>h7) k=h4, h4=h7, h7=k;
	if (h7>h8) k=h7, h7=h8, h8=k;
	if (h8>h9) k=h8, h8=h9, h9=k;

	if (h3>h7) k=h3, h3=h7, h7=k;
	if (h7>h8) k=h7, h7=h8, h8=k;
	if (h8>h9) k=h8, h8=h9, h9=k;	

	if (h2>h7) k=h2, h2=h7, h7=k;
	if (h7>h8) k=h7, h7=h8, h8=k;
	if (h8>h9) k=h8, h8=h9, h9=k;

	if (h1>h7) k=h1, h1=h7, h7=k;
	if (h7>h8) k=h7, h7=h8, h8=k;
	if (h8>h9) k=h8, h8=h9, h9=k;

	if (h0>h7) k=h0, h0=h7, h7=k;
	if (h7>h8) k=h7, h7=h8, h8=k;
	if (h8>h9) k=h8, h8=h9, h9=k;
	
	std::cout << h9 <<"\n"<< h8 <<"\n"<< h7 <<"\n";
	
	return 0;
	
}