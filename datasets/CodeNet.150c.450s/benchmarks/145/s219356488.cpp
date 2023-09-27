#include <iostream>
#include <string>
using namespace std;

struct DataBox
{
	int frequentCount;
	int maxLength;
	string frequentWord;
	string maxLengthWord;

	DataBox() : frequentCount(0), maxLength(0)	/* constructer */
	{
	}
};

int main(void)
{
	struct DataBox dataBox;
	string sentence;
	int count = 0;

	int maxSentenceWord = 1000;
	int maxWord = 32;
	int sentenceWordCount = 0;
	int wordCount = 0;
	string wordBox[1000];

	while(cin >> sentence)	/* input */
	{
		sentenceWordCount++;
		
		/* check */
		wordCount = (int)sentence.size();
		if(dataBox.maxLength < wordCount)
		{
			dataBox.maxLength = wordCount;
			dataBox.maxLengthWord = sentence;
		}

		wordBox[count] = sentence;
		count++;
	}

	/* check */
	int freCount = 0;
	for(int boxNum = 0; boxNum < count; boxNum++)
	{
		string str = wordBox[boxNum];
		for(int word = 0; word < count; word++)
		{
			if(str == wordBox[word])
			{
			    freCount++;
			}
			
			if(dataBox.frequentCount < freCount)
			{
				dataBox.frequentCount = freCount;
				dataBox.frequentWord = str;
			}  
		}
		freCount = 0;
	}

	cout << dataBox.frequentWord << ' ' << dataBox.maxLengthWord << endl;
	return 0;
}