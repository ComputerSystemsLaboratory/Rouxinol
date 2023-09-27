#include<iostream>
#define MAX 100000

int parent(int i) {return i / 2;}
int left(int i) {return 2 * i;}
int right(int i) {return i * 2 + 1;}

int main(){
	int i, H, A[MAX+1];
	std::cin >> H;
	for(i = 1; i <= H; ++i)std::cin >> A[i];
	for(i = 1; i <= H; ++i){
		std::cout << "node " << i << ": key = " << A[i] << ", ";
		if(parent(i) >= 1) std::cout << "parent key = " << A[parent(i)] << ", ";
		if(left(i) <= H) std::cout << "left key = " << A[left(i)] << ", ";
		if(right(i) <= H) std::cout << "right key = " << A[right(i)] << ", ";
		std::cout << std::endl;
	}
	return 0;
}	