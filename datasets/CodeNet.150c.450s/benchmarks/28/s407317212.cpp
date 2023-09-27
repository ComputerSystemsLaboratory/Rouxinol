#include <map>
#include <iostream>
using namespace std;
void A()
{
	int S[10000];
	int T[500];
	int N;
	int Q;
	int C = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> S[i];
	}

	cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		cin >> T[i];
	}

	for (int i = 0; i < Q; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (T[i] == S[j])
			{
				C++;
				break;
			}
		}
	}

	cout << C << endl;
}

void B()
{
	int S[100001];
	int T[50000];
	int N;
	int Q;
	int C = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> S[i];
	}

	cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		cin >> T[i];
	}

	for (int i = 0; i < Q; i++)
	{
		int left = 0;
		int right = N;
		while (left < right)
		{
			int center = (left + right) / 2;

			if (T[i] == S[center])
			{
				C++;
				break;
			}

			if (T[i] > S[center])
			{
				left = center + 1;
			}
			else
			{
				right = center;
			}
		}
	}

	cout << C << endl;
}
/*long MAX = 1000000;
char a = 'A';
char c ='C';
char g = 'G';
char t = 'T';
bool table[1000000][20];

int toNumber(char ch)
{
	if (ch == 'A')
	{
		return 1;
	}
	else if (ch == 'C')
	{
		return 2;
	}
	else if (ch == 'G')
	{
		return 3;
	}
	else if (ch == 'T')
	{
		return 4;
	}
	else
	{
		return 0;
	}
}
int hash(int num,int i)
{
	return (hash1(num) + (i*hash2(num))) % MAX;
}

int hash1(int num)
{
	return num % MAX;
}
int hash2(int num)
{
	return num %(MAX - 1);
}

void insert(char data[])
{
	int sum = 0;
	for (int i = 0; i < strlen(data); i++)
	{
		sum += toNumber(data[i]);
	}

	for (int i = 0; i < strlen(data); i++)
	{
		table[sum][i] = data[i];
	}
}

void find(char data[])
{

}*/

/*void C()
{
	map<string, bool> dictionary;
	int N;
	scanf_s("%d", &N);
	//cin >> N;
	char command[20],data[20];
	for (int i = 0; i < N; i++)
	{
		scanf_s("%s", command, 20);
		scanf_s("%s", data, 20);
		//cin >> command;
		//cin >> data;

		if (command[0] == 'i')
		{
			string key = data;
			dictionary[key] = true;
		}
		else if (command[0] =='f')
		{
			string key = data;
			if (dictionary.find(key) == dictionary.end())
			{
				cout << "no" << endl;
			}
			else
			{
				cout << "yes" << endl;
			}
		}
	}

}*/
int check(long long p,int w[],int n,int k)
{
	int i = 0;
	for (int j = 0; j < k; j++)
	{
		long long s = 0;
		while (s + w[i] <= p)
		{
			s += w[i];
			i++;
			if (i == n)return n;
		}
	}
	return i;
}
void D()
{
	int w[100000];
	int n;
	int k;

	cin >> n;
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
	}

	long long left = 0;
	long long right = 100000 * 10000;
	long long mid = 0;
	while (left + 1 < right)
	{
		mid = (left + right) >> 1;
		int r = check(mid,w,n,k);
		if (r >= n)right = mid;
		else left = mid;
	}
	cout << right << endl;

}
int main()
{
	//A();
	//B();
	//C();
	D();
	return 0;
}