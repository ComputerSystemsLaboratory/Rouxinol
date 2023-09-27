#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char word[10];
	cin >> word;
	int wordLength = strlen(word);
	for(int i = 0;i < wordLength;i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
			word[i] -= 'A' - 'a';
	}
	int number = 0;
	while(true)
	{
		char text[1000];
		cin.getline(text, 1000);
		if (strcmp(text, "END_OF_TEXT") == 0)
			break;
		int textLength = strlen(text);
		for(int i = 0;i < textLength;i++)
		{
			if (text[i] >= 'A' && text[i] <= 'Z')
				text[i] -= 'A' - 'a';
		}
		int limit = textLength - wordLength + 1;
		for (int i = 0; i < limit; i++)
		{
			if (text[i] == word[0])
			{
				bool HasFind = true;
				for (int j = 1; j < wordLength; j++)
				{
					if (text[(i + j)] != word[j])
						HasFind = false;
				}
				if (HasFind)
				{
					if (text[i - 1] == ' ' || i == 0)
						if (i + wordLength >= textLength)
							number++;
						else if (text[i + wordLength] == ' ')
							number++;
				}
			}
		}
	}
	cout << number << endl;
	return 0;
}
