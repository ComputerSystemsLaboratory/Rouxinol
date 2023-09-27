//============================================================================
// Name        : Cpp.cpp
// Author      :
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n = 0;
	vector<int> A(n);
	std::cin >> n;

	for(int i=0; i < n; i++)
	{
		int v;
		std::cin >> v;
		A.push_back(v);
	}

	int C[10001] = {0};
	vector<int> B(n, 0);

	for(int i=0; i < n; i++)
	{
		C[A[i]]++;
	}

	for(int i=1; i < 10001; i++)
	{
		C[i] += C[i - 1];
	}

	for(int i = n - 1; i >= 0; i--)
	{
		B[C[A[i]] - 1] = A[i];
		C[A[i]]--;
	}

	for(int i=0; i < n; i++)
	{
		if(i == n - 1) std::cout << B[i] << std::endl;
		else std::cout << B[i] << " ";
	}
	return 0;
}