#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
	//?????°?????????
	string W1 = "";
	string W2 = "";
	string T1 = "";
	string T2 = "";
	int count = 0;

	//??????W??¨?????????T?????\???
	cin >> W1;
	for (int i = 0; W1[i] != '\0'; i++)
	{
		W2 += toupper(W1[i]);
	}

	while (1)
	{
		T2 = "";
		cin >> T1;
		if (T1 == "END_OF_TEXT")
		{
			break;
		}

		for (int i = 0; T1[i] != '\0'; i++)
		{
			int c;
			T2 += toupper(T1[i]);
		}

		
		if (W2 == T2)
		{
			count++;
		}

	}


	//?????°?????¨???
	cout << count << endl;
	
	return 0;
}