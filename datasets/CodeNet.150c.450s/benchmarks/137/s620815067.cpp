#include <iostream>
#include <set>
#include <string>

typedef std::set<int> TDictionary;

int CharToInt(char c)
{
	switch(c)
	{
	case 'A' : return 0;
	case 'G' : return 1;
	case 'C' : return 2;
	case 'T' : return 3;
	}
	return 0;
}

int ToInt(std::string String)
{
	int Result = 0;
	int Order = 1;
	for(unsigned int i=0;i<String.size();i++)
	{
		Result += CharToInt(String[i]) * Order;
		Order *= 4;
	}
	return Result + Order;
}

std::string GetResultString(bool Result)
{
	return Result ? "yes" : "no";
}

int main()
{
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	TDictionary Dictionary;
	int Count = 0;
	std::cin >> Count;
	
	for(int i=0;i<Count;i++)
	{
		std::string Command;
		std::cin >> Command;
		std::string Input;
		std::cin >> Input;
		if(Command == "insert")
		{
			Dictionary.insert(ToInt(Input));
		}
		else if(Command == "find")
		{
			std::cout << GetResultString(Dictionary.find(ToInt(Input)) != Dictionary.end()) << std::endl;
		}
	}
	return 0;
}