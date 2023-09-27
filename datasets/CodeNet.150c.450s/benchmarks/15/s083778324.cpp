#include <iostream>
#include <vector>

class IntVector : public std::vector<int>
{
public:
	void Input(int Count);
	bool Search(int Target);
};

void IntVector::Input(int Count)
{
	for(int i=0;i<Count;i++)
	{
		int Input;
		std::cin >> Input;
		push_back(Input);
	}
}

bool IntVector::Search(int Target)
{
	for(unsigned int i=0;i<size();i++)
	{
		if(at(i) == Target) return true;
	}
	return false;
}

int main()
{
	int n = 0;
	std::cin >> n;
	IntVector S;
	S.Input(n);
	int q = 0;
	std::cin >> q;
	int Count = 0;
	for(int i=0;i<q;i++)
	{
		int T;
		std::cin >> T;
		Count += S.Search(T);
	}
	
	std::cout << Count << std::endl;
	return 0;
}