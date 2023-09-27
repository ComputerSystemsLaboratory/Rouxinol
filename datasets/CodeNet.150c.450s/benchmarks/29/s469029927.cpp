#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#include<sstream>
#include<stack>
#include<queue>
#include<list>
#define _USE_MATH_DEFINES

#include<math.h>
#include<unordered_map>

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

class  OwnList
{
public:
	int data[2100000];
	int head;
	int end;
public:
	OwnList()
	{
		head = 2000000;
		end = 2000000;
	}
	void Insert(int x)
	{
		head--;
		data[head] = x;
	}

	void Delete(int x)
	{
		int tempIndex = end;
		for (int i = head; i < end; i++)
		{
			if (data[i] == x)
			{
				tempIndex = i;
				break;
			}
		}
		if (tempIndex != end)
		{
			while(true)
			{
				if (tempIndex == head)
				{
					break;
				}
				data[tempIndex] = data[tempIndex - 1];
				tempIndex--;
			}
			head++;
		}
	}

	void DeleteHead()
	{
		head++;
	}

	void DeleteEnd()
	{
		end--;
	}

	void Disp()
	{
		for (int i = head; i < end; i++)
		{
			cout << data[i];
			if (i < (end - 1))
			{
				cout << " ";
			}
		}
		cout << endl;
	}
};

OwnList l;

int main()
{
	int n;

	cin >> n;

	char command[32];
	
	for (int i = 0; i < n; i++)
	{
		scanf("%s", command);

		if (command[6] == '\0')
		{
			if (command[0] == 'i')
			{
				int value;
				cin >> value;
				l.Insert(value);
			}
			else if (command[0] == 'd')
			{
				int value;
				cin >> value;
				l.Delete(value);
			}
		}
		else if (command[6] == 'F')
		{
			l.DeleteHead();
		}
		else if (command[6] == 'L')
		{
			l.DeleteEnd();
		}
	}

	int i = 0;
	l.Disp();
	return 0;
}