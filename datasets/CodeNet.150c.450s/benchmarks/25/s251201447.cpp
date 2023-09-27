#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ma;
	int sum[123] = {}, i, j=0;
	while (cin.get(ma))
	{
		if (ma == '\n')j++;
		if (j >= 5)break;
		ma = tolower(ma);
		if (isalpha(ma))sum[ma]++;
	}
	for (i = 97; i <= 122; i++)
		cout << static_cast<char>(i) << " : " << sum[i] << endl;
	return 0;
}
