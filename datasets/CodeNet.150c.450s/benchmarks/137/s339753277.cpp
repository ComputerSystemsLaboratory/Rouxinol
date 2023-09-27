#define _CRT_SECURE_NO_WARNINGS 1

#include <cmath>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

#define MAX_LETTERS  12

const char Alphabet[4] = { 'A', 'C', 'G', 'T' };

int cipher(string S)
{
	int Ans = 0;

	for (string::size_type i = 0; i < S.size(); i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (Alphabet[j] == S[i])
			{
				Ans += pow<int>(sizeof(Alphabet) / sizeof(const char), S.size() - i - 1) * j;
			}
		}
	}

	return Ans;
}

int main()
{
	vector<vector<bool> > D;

	unsigned n;

	for (int i = 0; i <= MAX_LETTERS; i++)
	{
		D.push_back(vector<bool>(pow<unsigned>(sizeof(Alphabet) / sizeof(const char), i), false));
	}

	scanf("%d", &n);

	vector<string> W;

	vector<bool> F(n);

	for (vector<bool>::size_type i = 0; i < n; i++)
	{
		char S1[20], S2[20];

		string S3, S4;

		scanf("%s%s", &S1, &S2);

		S3 = S1;
		S4 = S2;

		if (S3 == "find")
		{
			F[i] = true;
		}

		W.push_back(S4);
	}

	for (vector<string>::size_type i = 0; i < n; i++)
	{
		if (F[i] == false)
		{
			D[W[i].size()][cipher(W[i])] = true;
		}
		else
		{
			printf("%s\n", (D[W[i].size()][cipher(W[i])] ? "yes" : "no"));
		}
	}

	return 0;
}