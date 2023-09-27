#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{		

		string number;

	int askii[1000]={};

		while (cin >> number)
		{	
				for (int j = 0; j < number.size(); j++)
				{
					char a=number[j];
					
					if('A'<=a&&a <='Z')
					{
						a+=32;
					}
					askii[a]++;
				}

		}
	
	for(char a='a';a<='z';a++)
	{
		
		cout << a << " : " << askii[a] << endl;
	
	}
	
	return 0;
}