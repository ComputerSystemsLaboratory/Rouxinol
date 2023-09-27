//	-*- mode: C++ -*-
// Quick Sort
//	Let's arrange a deck of cards. Your task is to sort totally n cards. A card consists of a part of a suit (S, H, C or D) and an number. Write a program which sorts such cards based on the following pseudocode:
//
//	Partition(A, p, r)
//	1 x = A[r]
//	2 i = p-1
//	3 for j = p to r-1
//	4     do if A[j] <= x
//	5        then i = i+1
//	6            exchange A[i] and A[j] 
//	7 exchange A[i+1] and A[r]
//	8 return i+1
//
//
//	Quicksort(A, p, r)
//	1 if p < r
//	2    then q = Partition(A, p, r)
//	3        run Quicksort(A, p, q-1)
//	4        run Quicksort(A, q+1, r)
//	Here, A is an array which represents a deck of cards and comparison operations are performed based on the numbers.
//
//	Your program should also report the stability of the output for the given input (instance). Here, 'stability of the output' means that: cards with the same value appear in the output in the same order as they do in the input (instance).
//
// Input
//	The first line contains an integer n, the number of cards.
//
//	n cards are given in the following lines. Each card is given in a line and represented by a pair of a character and an integer separated by a single space.
//
// Output
//	In the first line, print the stability ("Stable" or "Not stable") of this output.
//
//	In the following lines, print the arranged cards in the same manner of that of the input.
//
// Constraints
//	1 ≤ n ≤ 100,000
//	1 ≤ the number of a card ≤ 109
//	There are no identical card in the input
// Sample Input 1
//	6
//	D 3
//	H 2
//	D 1
//	S 3
//	D 2
//	C 1
// Sample Output 1
//	Not stable
//	D 1
//	C 1
//	D 2
//	H 2
//	D 3
//	S 3
// Sample Input 2
//	2
//	S 1
//	H 1
// Sample Output 2
//	Stable
//	S 1
//	H 1

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

typedef std::pair<char, unsigned int>	card;

class CC
{
public:
	CC(){}
	~CC(){}
	void	judgeQuickSort();

private:
	unsigned int		n		{0};
	std::vector<card>	A		{};
	std::vector<card>	B		{};
	unsigned int		count	{0};

	void			QuickSort(unsigned int	p,
							  unsigned int	r);

	unsigned int	Partition(unsigned int	p,
							  unsigned int	r);

	void			printSortedA();

	void			MergeSort(unsigned int	left,
							  unsigned int	right);

	void			Merge(unsigned int	left,
						  unsigned int	mid,
						  unsigned int	right);
};

unsigned int	CC::Partition(unsigned int	p,
							  unsigned int	r)
{
	auto	x	= A[r];
	int		i	= p - 1;

	for(int j = p; j < r; j++){
		if(A[j].second <= x.second){
			i++;
			std::swap(A[i], A[j]);
		}
	}

	std::swap(A[i + 1], A[r]);

	return	i + 1;
}

void	CC::QuickSort(unsigned int	p,
					  unsigned int	r)
{
	if(p < r){
		unsigned int	q	= Partition(p, r);
		QuickSort(p, q - 1);
		QuickSort(q + 1, r);
	}
}

void	CC::printSortedA()
{
	for(auto Ai : A){
		std::cout << Ai.first << ' ' << Ai.second << std::endl;
	}
}

void	CC::Merge(unsigned int	left,
				  unsigned int	mid,
				  unsigned int	right)
{
	unsigned int	n1	= mid - left;
	unsigned int	n2	= right - mid;
	card			max	{'x', ULONG_MAX};

	std::vector<card>	L	{};
	std::vector<card>	R	{};

	for(unsigned int i = 0; i < n1 ; i++){
		L.push_back(B[left + i]);
	}
	L.push_back(max);

	for(unsigned int i = 0; i < n2; i++){
		R.push_back(B[mid + i]);
	}
	R.push_back(max);

	unsigned	int	i	{0};
	unsigned	int	j	{0};

	for(unsigned int k = left; k < right ; k++){
		count++;
		if(L[i].second <= R[j].second){
			B[k]	= L[i];
			i++;
		}
		else{
			B[k]	= R[j];
			j++;
		}
	}
}

void	CC::MergeSort(unsigned int	left,
					  unsigned int	right)
{
	if(left + 1 < right){
		unsigned int	mid	= (left + right) / 2;
		MergeSort(left, mid);
		MergeSort(mid, right);
		Merge(left, mid, right);
	}
}

void	CC::judgeQuickSort()
{
	std::cin >> n;

	for(unsigned int i = 0; i < n; i++){
		card	Ai	{};
		std::cin >> Ai.first >> Ai.second;
		A.push_back(Ai);
		B.push_back(Ai);
	}

	QuickSort(0, n - 1);
	MergeSort(0, n);

	bool	isStable	{true};

	for(unsigned int i = 0; i < n; i++){
		if(A[i].first != B[i].first){
			isStable	= false;
			break;
		}
	}

	if(isStable){
		std::cout << "Stable" << std::endl;
	}
	else{
		std::cout << "Not stable" << std::endl;
	}

	printSortedA();
}

int	main()
{
	CC	cc;

	cc.judgeQuickSort();
}

