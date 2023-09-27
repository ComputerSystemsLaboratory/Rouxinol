#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
const char button[10][6] = {	{},
								{'.',',','!','?',' '},
								{'a','b','c'},
								{'d', 'e', 'f'}, 
								{'g', 'h', 'i'},
								{'j', 'k', 'l'},
								{'m', 'n', 'o'},
								{'p', 'q', 'r', 's'},
								{'t', 'u', 'v'},
								{'w', 'x', 'y', 'z',}};
const int num[10] = {0,5,3,3,3,3,3,4,3,4};
int main()
{
	int n;
	cin >> n;
	char line[1024];
	for (int i = 0; i < n; i++)
	{
		cin >> line;
		int len = strlen(line);
		int j = 0;
		while (j < len)
		{
			int next = j + 1;
			int count = 0;
			while(next < len  && line[next] == line[j])
			{
				next++;
				count++;
			}
			if ((line[j] - '0') != 0)
			{
				int number = line[j] - '0';
				int length = num[number];
				cout << button[number][count % length];
			}
			count = 0;
			j = next;
		}
		cout<<endl;

	}
	return 0;
}