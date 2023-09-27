#include <iostream>
#define MAX 100010
using namespace std;

long long n, k;
long long w[MAX];

bool check(long long p)
{
	int i = 0;
	for(int j = 0;j < k;j++)
	{
		int sum = 0;
		while(sum + w[i] <= p)
		{
			sum += w[i];
			i++;
			
			if (i == n) return true;
		}
	}
	return false;
}

int main ()
{
	
	//輸入
	cin >> n >> k;
	for (int i = 0;i < n;i++)
	{
		cin >> w[i];
	}
	
	//處理
	long long left = 0, middle = 0;
	long long P = 1e+5*1e+4; // right
	
	while(P > left+1)
	{
		middle = (P + left) / 2;
		if (check(middle))
		{
			P = middle;
		}
		else
		{
			left = middle;
		}
	}
	
	//輸出
	cout << P << endl;
	
	return 0;
}
