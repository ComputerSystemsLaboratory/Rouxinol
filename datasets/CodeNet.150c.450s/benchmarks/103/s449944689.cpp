#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int n,s,result;

void saiki(int summed,int maxi,int sum)
{
	if(summed < n)
	{
		for(int a = maxi;a>=0;a--)
		{
			if(sum + a < s)
			{
 				saiki(summed + 1,a - 1,sum + a);
			}
			else if(sum + a == s)
			{
				if(summed + 1 == n)
				{
					result++;
				}
				else
				{
					saiki(summed + 1,a-1,sum+a);
				}
			}
		}
	}
}

int main()
{
	for(int i = 0;;i++)
	{
		cin >> n >> s;

		if(n == 0 && s == 0)
		{
			break;
		}

		result = 0;

		saiki(0,9,0);

		cout << result << endl;
	}
}