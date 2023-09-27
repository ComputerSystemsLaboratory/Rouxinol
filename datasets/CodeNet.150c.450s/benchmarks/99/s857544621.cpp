#include<iostream>
#include<stack>
using namespace std;
char och[] = { '0','i','x','c','m' };
int getn(const char * s)
{
	int result = 0;
	int i;
	int pfx;
	for (i = 0; s[i] != 0; i++)
	{
		pfx = 1;
		if (s[i] >= '2'&&s[i] <= '9')
			pfx = s[i++] - '0';
		switch (s[i])
		{
			case 'm':
				result += pfx * 1000;
				break;
			case 'c':
				result += pfx * 100;
				break;
			case 'x':
				result += pfx * 10;
				break;
			case 'i':
				result += pfx;
				break;
		}
	}
	return result;
}
void putn(int n)
{
	stack<int> s;
	int t = n;
	while (t != 0)
	{
		s.push(t % 10);
		t /= 10;
	}
	int i = s.size();
	while (!s.empty())
	{
		int t = s.top();
		s.pop();
		if (t == 0)
		{
			i--;
			continue;
		}
		if (t >= 2)
			printf("%d", t);
		printf("%c", och[i]);
		i--;
	}
	printf("\n");
}
int main()
{
	//freopen("input.txt", "r", stdin);
	int T;
	scanf("%d", &T);
	while(T--)
	{
		char str1[15], str2[15];
		int n1, n2;
		scanf("%s", str1);
		scanf("%s", str2);
		n1 = getn(str1);
		n2 = getn(str2);
		putn(n1 + n2);
	}
	return 0;
}