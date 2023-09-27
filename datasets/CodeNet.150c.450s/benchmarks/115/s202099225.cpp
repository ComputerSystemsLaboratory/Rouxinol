#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int lcs(string str1, string str2)
{
	int len[1001][1001] = { 0 };

	int len1 = str1.size();
	int len2 = str2.size();
	str1 = ' ' + str1;
	str2 = ' ' + str2;
	for (int i = 0; i <= len1; i++)
	{
		for (int l = 0; l <= len2; l++)len[i][l] = 0;
	}
	for (int i = 1; i <= len1; i++)
	{
		for (int l = 1; l <= len2; l++)
		{
			if (str1[i] == str2[l]) len[i][l] = len[i - 1][l - 1] + 1;
			else
			{
				len[i][l] = max(len[i - 1][l], len[i][l - 1]);
			}
		}
	}
	return len[len1][len2];
}
int main()
{
	int n;
	string str1, str2;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str1 >> str2;
		cout << lcs(str1, str2) << endl;
	}

	return 0;
}