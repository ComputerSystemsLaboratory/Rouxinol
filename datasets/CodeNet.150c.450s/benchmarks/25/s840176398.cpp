#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	char alpha_A[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'I', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	char alpha_a[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	int alpha_count[26] = {};
	char ch;
	
	while (cin >> ch)
	{
		if ('A' <= ch && ch <= 'z')
		{
			for (int i = 0; i < 26; i++)
			{
				if (ch == alpha_A[i] || ch == alpha_a[i])
				{
					alpha_count[i]++;
					break;
				}
			}
		}
	}

	for (int i = 0; i < 26; i++){
		cout << alpha_a[i] << " : " << alpha_count[i] << endl;
	}
	return 0;
}