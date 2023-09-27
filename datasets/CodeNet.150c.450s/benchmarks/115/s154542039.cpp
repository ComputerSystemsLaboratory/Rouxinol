#include <iostream>
#include <string>
#include <vector>

class TLongistCommons
{
	std::vector<std::vector<int> > FTable;
	const std::string& FSequenceX;
	const std::string& FSequenceY;
	
	int MeasureCommons(int PrefixX, int PrefixY);
public:
	TLongistCommons(const std::string& SequenceX, const std::string& SequenceY);
	
	int Length();
};

TLongistCommons::TLongistCommons(const std::string& SequenceX, const std::string& SequenceY)
: FSequenceX(SequenceX), FSequenceY(SequenceY), FTable(SequenceX.length() + 1, std::vector<int>(SequenceY.length() + 1, -1))
{
}

int TLongistCommons::MeasureCommons(int PrefixX, int PrefixY)
{
	if(FTable[PrefixX][PrefixY] < 0){
		int Longest;
		if(PrefixX == 0 || PrefixY == 0){
			Longest = 0;
		}else if(FSequenceX[PrefixX - 1] == FSequenceY[PrefixY - 1]){
			Longest = MeasureCommons(PrefixX - 1, PrefixY - 1) + 1;
		}else{
			Longest = std::max(MeasureCommons(PrefixX - 1, PrefixY), MeasureCommons(PrefixX, PrefixY - 1));
		}
		FTable[PrefixX][PrefixY] = Longest;
	}
	return FTable[PrefixX][PrefixY];
}

int TLongistCommons::Length()
{
	return MeasureCommons(FSequenceX.length(), FSequenceY.length());
}

int MeasureLcs(const std::string& SequenceX, const std::string& SequenceY)
{
	TLongistCommons Subsequence(SequenceX, SequenceY);
	return Subsequence.Length();
}

int main()
{
	int Count;
	std::cin >> Count;
	for(int i = 0; i < Count; ++i){
		std::string SequenceX, SequenceY;
		std::cin >> SequenceX;
		std::cin >> SequenceY;
		std::cout << MeasureLcs(SequenceX, SequenceY) << std::endl;
	}
	return 0;
}