#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

typedef std::vector<int> TInts;
void Input(TInts& Numbers)
{
	int Count = 0;
	std::cin >> Count;
	Numbers.resize(Count);
	for(int i=0;i<Count;i++)
	{
		std::cin >> Numbers[i];
	}
}

bool Search(const TInts& Data,int Target,int Buffer,TInts::iterator It)
{
	if(Buffer == Target) return true;
	if(It == Data.end()) return false;
	int Now = *It;
	It++;
	return Search(Data,Target,Buffer + Now,It) || Search(Data,Target,Buffer,It);
}

int main()
{
	TInts Inputs;
	Input(Inputs);
	TInts Targets;
	Input(Targets);
	std::sort(Inputs.begin(),Inputs.end(),std::greater<int>());
	
	for(unsigned int i=0;i<Targets.size();i++)
	{
		std::string Result = Search(Inputs,Targets[i],0,Inputs.begin()) ? "yes" : "no";
		std::cout << Result << std::endl;
	}
	
	return 0;
}