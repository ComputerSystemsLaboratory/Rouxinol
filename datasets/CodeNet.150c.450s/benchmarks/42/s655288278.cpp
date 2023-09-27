#include <iostream>
#include <queue>
#include <string>
//--------------------------------------------------------------------------
struct TData
{
	std::string Name;
	int Rest;
	void Input();
};
//--------------------------------------------------------------------------
void TData::Input()
{
	std::cin >> Name;
	std::cin >> Rest;
}
//--------------------------------------------------------------------------
typedef std::queue<TData> TDataQueue;

void InputDataQueue(TDataQueue& DataQueue,const int& Count);
void RoundRobin(TDataQueue& DataQueue,const int& Quantum);
//--------------------------------------------------------------------------
int main()
{
	int Count = 0;
	std::cin >> Count;
	int Quantum = 0;
	std::cin >> Quantum;
	
	TDataQueue DataQueue;
	InputDataQueue(DataQueue,Count);
	RoundRobin(DataQueue,Quantum);
	
	return 0;
}
//--------------------------------------------------------------------------
void InputDataQueue(TDataQueue& DataQueue,const int& Count)
{
	for(int i=0;i<Count;i++)
	{
		TData Data;
		Data.Input();
		DataQueue.push(Data);
	}
}
//--------------------------------------------------------------------------
void RoundRobin(TDataQueue& DataQueue,const int& Quantum)
{
	int Clock = 0;
	while(!DataQueue.empty())
	{
		TData FrontData = DataQueue.front();
		FrontData.Rest -= Quantum;
		if(FrontData.Rest > 0)
		{
			Clock += Quantum;
			DataQueue.push(FrontData);
		}else
		{
			Clock += DataQueue.front().Rest;
			std::cout << FrontData.Name << " " << Clock << std::endl;
		}
		DataQueue.pop();
	}
}
//--------------------------------------------------------------------------