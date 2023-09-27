#include <iostream>
#include <set>
#include <string>
using namespace std;

void solve()
{
	int N;
	cin >> N;
	set<string> ID;
	while(N--)
	{
		string str;
		cin >> str;
		ID.insert(str);
	}
	int M;
	cin >> M;
	bool flag = false;
	while(M--)
	{
		string str;
		cin >> str;
		if(ID.find(str) == ID.end())
		{
			cout << "Unknown " << str << endl;
		}
		else
		{
			if(!flag)
			{
				cout << "Opened by " << str << endl;
			}
			else
			{
				cout << "Closed by " << str << endl;
			}
			flag = !flag;
		}
	}
}

int main()
{
	solve();
	return(0);
}