//	-*- mode: C++ -*-
// The Number of Inversions
//
//	For a given sequence A={a0,a1,...an−1}, the number of pairs (i,j) where ai>aj and i<j, is called the number of inversions. The number of inversions is equal to the number of swaps of Bubble Sort defined in the following program:
//
//	bubbleSort(A)
//	  cnt = 0 // the number of inversions
//	  for i = 0 to A.length-1
//	    for j = A.length-1 downto i+1
//	      if A[j] < A[j-1]
//		swap(A[j], A[j-1])
//		cnt++
//
//	  return cnt
//	For the given sequence A, print the number of inversions of A. Note that you should not use the above program, which brings Time Limit Exceeded.
//
// Input
//	In the first line, an integer n, the number of elements in A, is given. In the second line, the elements ai (i=0,1,..n−1) are given separated by space characters.
//
// output
//	Print the number of inversions in a line.
//
// Constraints
//	1≤n≤200,000
//	0≤ai≤10^9
//	ai are all different
// Sample Input 1
//	5
//	3 5 2 1 4
// Sample Output 1
//	6
// Sample Input 2
//	3
//	3 1 2
// Sample Output 2
//	2

#include <iostream>
#include <vector>
#include <climits>

class CB
{
public:
	CB(){}
	~CB(){}
	void	Sort();

private:
	unsigned long long				n		{0};
	unsigned long long				count	{0};
	std::vector<unsigned long long>	S		{};

	void	Merge(unsigned long long	left,
				  unsigned long long	mid,
				  unsigned long long	right);

	void	MergeSort(unsigned long long	left,
					  unsigned long long	right);
};

void	CB::Sort()
{
	std::cin >> n;

	for(unsigned long long i = 0; i < n; i++){
		unsigned long long	Si;
		std::cin >> Si;
		S.push_back(Si);
	}

	MergeSort(0, n);

	std::cout << count << std::endl;
}

void	CB::Merge(unsigned long long	left,
				  unsigned long long	mid,
				  unsigned long long	right)
{
	unsigned long long	n1	= mid - left;
	unsigned long long	n2	= right - mid;

	std::vector<unsigned long long>	L	{};
	std::vector<unsigned long long>	R	{};

	for(unsigned long long i = 0; i < n1 ; i++){
		L.push_back(S[left + i]);
	}
	L.push_back(ULLONG_MAX);

	for(unsigned long long i = 0; i < n2; i++){
		R.push_back(S[mid + i]);
	}
	R.push_back(ULLONG_MAX);

	unsigned	long long	i	{0};
	unsigned	long long	j	{0};

	for(unsigned long long k = left; k < right ; k++){
		if(L[i] <= R[j]){
			S[k]	= L[i];
			i++;
		}
		else{
			S[k]	= R[j];
			j++;
			count += n1 - i;
		}
	}
}

void	CB::MergeSort(unsigned long long	left,
					  unsigned long long	right)
{
	if(left + 1 < right){
		unsigned long long	mid	= (left + right) / 2;
		MergeSort(left, mid);
		MergeSort(mid, right);
		Merge(left, mid, right);
	}
}

int	main(int	argc,
		 char*	argv[])
{
	CB	cb;

	cb.Sort();

	return 0;
}

