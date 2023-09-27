#include<iostream>
#include<stack>

bool listen_input(int &);

void exec_order(std::stack<int> &,const int);

//--------------------main-------------------------
int main()
{
	using namespace std;
	
	stack<int> carStop;
	
	int order;
	while(listen_input(order))
	{
		exec_order(carStop,order);
	}
	
	return 0;
}
//-------------------------------------------------

bool listen_input(int &order)
{
	using namespace std;
	
	cin>>order;
	if(cin.eof())
	{
		return false;
	}
	else
	{
		return true;
	}
}

void exec_order(std::stack<int> &carStop,const int order)
{
	using namespace std;
	
	if(order)
	{
		carStop.push(order);
	}
	else
	{
		cout<<carStop.top()<<endl;
		carStop.pop();
	}
}