/*
时间:2020-7-30
书籍：算法和数据结构
内容：搜索的应用--计算最优解
页数：P94
*/
#include<iostream>
#include<string>
using namespace std;
int n, k;
int* T;
int check(long long int p)
{
	int j = 0;       // 记录已经装了多少货物
	for (int i = 1; i <= k; ++i)
	{
		int sum = 0;
		while (sum +T[j]<= p)                   //这里面是sum+T[i],必须确保装载后不会超载才可以装车，而不是T[j]<=p
		{
			sum += T[j];
			++j;
			if (j == n)
				return n;
		}
	}
	return j;
}
int tryLoad()
{
	long long int left = 0;              //从0开始，而不是从1开始，不然，1的解答案包含不到
	long long int right = 100000 * 100000;
	long long int mid = (left + right) / 2;
	long long int now = check(mid);
	while (right - left > 1)
	{
		if (now >= n)
		{
			right = mid;
			mid= (left + right) / 2;
			now = check(mid);
		}
		else
		{
			left = mid;
			mid = (left + right) / 2;
			now = check(mid);
		}
	}
	return right;
}
int main()
{
	cin >> n >> k;
	T = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> T[i];
	long long int n = tryLoad();
	cout << n << endl;
	delete[]T;
	return 0;
}
