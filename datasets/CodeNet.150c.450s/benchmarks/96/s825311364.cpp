#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

#define all(i) i.begin(), i.end()
#define rep(i,n) for(int i=0;i<n;i++)

int main()
{
	int num = 0; cin >> num;
	string dat[12] = { "", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	rep(i, num)
	{
		string str; cin >> str;
		vector<int> hit(10, 0);
		rep(j, (int)str.size())
		{
			hit[str[j] - '0'] += 1;
			if (j == 0 || str[j - 1] == '0') {}
			else if (str[j] == '0')
			{
				int tmp = str[j - 1] - '0', n = hit[tmp];
				while (1)
				{
					if (n <= (int)dat[tmp].size()) { break; }
					n -= (int)dat[tmp].size();
				}
				/*n = hit[tmp] % (int)dat[tmp].size();
				if (n == 0){ n = hit[tmp] + 1; }
				if (n >= 3 && (int)dat[tmp].size() == 3) { n -= 1; }*/
				printf("%c", dat[tmp][n - 1]);
				rep(i, 10){ hit[i] = 0; }
			}
		}
		printf("\n");
	}
	return 0;
}