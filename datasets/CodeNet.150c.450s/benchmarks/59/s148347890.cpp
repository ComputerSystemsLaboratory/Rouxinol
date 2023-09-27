#include <iostream>
#include <vector>

void OutputIntVector(const std::vector<int>& Vector);

int main()
{
	int N;
	std::cin >> N;
	std::vector<int> A;
	A.resize(N);
	for(int i=0;i<N;i++)
	{
		std::cin >> A[i];
	}

	OutputIntVector(A);

	for(int i=1;i<N;i++)
	{
		int key = A[i];
		/* insert A[i] into the sorted sequence A[0,...,j-1] */
		int j = i - 1;
		while(j>=0 && A[j]>key)
		{
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
		OutputIntVector(A);
	}

	return 0;
}

void OutputIntVector(const std::vector<int>& Vector)
{
	for(unsigned int i=0;i<Vector.size();i++)
	{
		std::cout << Vector[i] << std::flush;
		if(i < Vector.size() -1)
		{
			std::cout << " " << std::flush;
		}else{
			std::cout << std::endl;
		}
	}
}