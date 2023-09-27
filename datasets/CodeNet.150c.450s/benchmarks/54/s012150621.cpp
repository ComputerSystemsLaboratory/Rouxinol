#include <string.h>
#include <ctype.h>
#include <iostream>
#include <string>


using namespace std;

int main()
{
	char W[10 + 1] = { 0 };
	char Ti[1000 + 1] = { 0 };
	int W_len = 0;
	int Ti_len = 0;
	int count = 0;

	cin >> W;
	W_len = strlen(W);
	for (int i = 0; i < W_len; i++)
		W[i] = toupper(W[i]);
	
	while(true)
	{
		cin >> Ti;
		if (strcmp(Ti, "END_OF_TEXT") == 0) break;
		Ti_len = strlen(Ti);
		int i = 0, limit = W_len < Ti_len ? W_len + 1 : Ti_len + 1;
		for (; i < limit; i++) {
			Ti[i] = toupper(Ti[i]);
			if (Ti[i] != W[i]) break;
		}
		if (i == limit) count++;
	}
	cout << count << endl;
	return 0;
}