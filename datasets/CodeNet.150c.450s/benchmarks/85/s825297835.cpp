#include <iostream>
#include <climits>
#include <vector>

class TMinimumMultiplications
{
	std::vector<std::vector<int> > FTable;
	std::vector<std::pair<int, int> >& FMatrixChain;
	
	int GetMinimum(int Begin, int End);
public:
	TMinimumMultiplications(std::vector<std::pair<int, int> >& MatrixChain);
	
	int Get(int Begin, int End);
};

TMinimumMultiplications::TMinimumMultiplications(std::vector<std::pair<int, int> >& MatrixChain)
: FMatrixChain(MatrixChain), FTable(MatrixChain.size(), std::vector<int>(MatrixChain.size(), -1))
{
}

int TMinimumMultiplications::GetMinimum(int Begin, int End)
{
	int Minimum = INT_MAX;
	for(int i = Begin; i < End; ++i){
		int Total = Get(Begin, i) + Get(i + 1, End) + FMatrixChain[Begin].first * FMatrixChain[i + 1].first * FMatrixChain[End].second;
		if(Minimum > Total) Minimum = Total;
	}
	return Minimum;
}

int TMinimumMultiplications::Get(int Begin, int End)
{
	if(Begin == End) return 0;
	if(FTable[Begin][End] < 0){
		FTable[Begin][End] = GetMinimum(Begin, End);
	}
	return FTable[Begin][End];
}

int main()
{
	int Count;
	std::cin >> Count;
	std::vector<std::pair<int, int> > MatrixChain;
	for(int i = 0; i < Count; ++i){
		int Row, Col;
		std::cin >> Row >> Col;
		MatrixChain.push_back(std::make_pair(Row, Col));
	}
	TMinimumMultiplications Minimum(MatrixChain);
	std::cout << Minimum.Get(0, MatrixChain.size() - 1) << std::endl;
	return 0;
}