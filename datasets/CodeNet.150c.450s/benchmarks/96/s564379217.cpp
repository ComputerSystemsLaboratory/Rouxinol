


#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include <functional>

using namespace std;

int INF = 10000000;

int n;

char table[10][7] = 
{
	{'\\'},
	{'.',',','!','?',' ','-'},
	{'a','b','c','-'},
	{'d','e','f','-'},
	{'g','h','i','-'},
	{'j','k','l','-'},
	{'m','n','o','-'},
	{'p','q','r','s','-'},
	{'t','u','v','-'},
	{'w','x','y','z','-'},


};

int main()
{
	cin >> n;

	for(int i = 0;i < n;i++)
	{
		char str[80];
		int cmax = 0;

		string input;

		cin >> input;

		int a,b = -1,c = 0;

		for(int j = 0;j < input.length();j++)
		{
			a = input[j] - '0';
			

			if(a == 0)
			{
				if(b != -1 && b != 0){str[cmax++] = table[b][c];str[cmax] = '\0';}
				b = -1;c = 0;
			}

			if(b == a)
			{
				c++;
				if(table[b][c] == '-')c = 0;
			}

			b = a;

		}

		cout << str << endl;

	}

  return 0;
}