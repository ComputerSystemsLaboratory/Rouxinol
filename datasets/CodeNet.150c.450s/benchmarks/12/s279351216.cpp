#include <iostream>

int main()
{
	int n; std::cin >> n;
	
	int* heap = new int[n+1];
	
	for (int i=1; i<=n; i++) std::cin >> heap[i];
	
	for (int i=1; i<=n; i++) {
		std::cout << "node " << i << ": key = " << heap[i] << ", ";
		if (i>1) std::cout << "parent key = " << heap[i/2] << ", ";
		if (2*i<=n) std::cout << "left key = " << heap[2*i] << ", ";
		if (2*i+1<=n) std::cout << "right key = " << heap[2*i+1] << ", ";
		std::cout << std::endl;
	}
	
	delete[] heap;
	
	return 0;
}

