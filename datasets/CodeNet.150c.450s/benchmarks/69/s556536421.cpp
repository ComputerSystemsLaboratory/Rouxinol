#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

int dataSet[10];
bool bz_flag[10];
stack<int> temp_A,temp_B;

bool test_cl (int data_pos)
{
	if (data_pos<10)
	{
		if (temp_A.empty())
		{
			temp_A.push(dataSet[data_pos]);
			bz_flag[data_pos] = true;
			return test_cl(data_pos + 1);
		}
		else
		{
			if (temp_A.top()<dataSet[data_pos])
			{
				temp_A.push(dataSet[data_pos]);
				bz_flag[data_pos] = true;
				return test_cl(data_pos + 1);
			}
			else
			{
				if (temp_B.empty())
				{
					temp_B.push(dataSet[data_pos]);
					bz_flag[data_pos] = true;
					return test_cl(data_pos + 1);
				}
				else
				{
					if (temp_B.top() < dataSet[data_pos])
					{
						temp_B.push(dataSet[data_pos]);
						bz_flag[data_pos] = true;
						return test_cl(data_pos + 1);
					}
					else
					{
						return false;
					}
				}
			}
		}
	}
	else
	{
		return true;
	}
}

int main ()
{
	int N;
	cin>>N;
	while (N--)
	{
		memset(bz_flag,false,sizeof(bz_flag[0]));
		for (int i=0;i<10;i++)
		{
			cin>>dataSet[i];
		}
		if (test_cl(0) == true)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		while (!temp_A.empty())
		{
			temp_A.pop();
		}
		while (!temp_B.empty())
		{
			temp_B.pop();
		}
	}
	return 0;
}