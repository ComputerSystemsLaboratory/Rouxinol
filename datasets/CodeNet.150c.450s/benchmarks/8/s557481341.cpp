#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int n;

	string Tarou;
	string Hanako;

	int TarouP = 0;
	int HanakoP = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> Tarou >> Hanako;

		int size;

		if (Tarou.size() > Hanako.size())size = Hanako.size();
		else size = Tarou.size();

		for (int j = 0; j < size; j++)
		{
			if (Tarou[j]<Hanako[j])
			{
				HanakoP += 3;
				break;
			}
			else if (Tarou[j]>Hanako[j])
			{
				TarouP += 3;
				break;
			}
			else if (Tarou[j]==Hanako[j]&&j==size-1)
			{
				if (size<Tarou.size())
				{
					TarouP += 3;
					break;
				}
				else if (size < Hanako.size())
				{
					HanakoP += 3;
					break;
				}
				else
				{
					TarouP += 1;
					HanakoP += 1;
				}
			}
		}
	}

	cout << TarouP << " " << HanakoP << endl;

	

	return 0;
}