#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <algorithm>
#include <stdio.h>
#include <functional>
using namespace std;

int sum[1048576];
int sum_cnt = 0;
int a[20];

bool memo[20][2001];

void make_sum_array(int depth, int sum_now)
{
	if (sum_now > 2000)
	{
		return;
	}

	if (memo[depth][sum_now] == true)
	{
		return;
	}
	else
	{
		memo[depth][sum_now] = true;
	}

	if (depth == 19)
	{
		sum[sum_cnt++] = sum_now;
		sum[sum_cnt++] = sum_now + a[19];
	}
	else
	{
		make_sum_array(depth + 1, sum_now);
		make_sum_array(depth + 1, sum_now + a[depth]);
	}
}

int main()
{
	//Aの要素を任意に足しあわせてできる数字リストを作る
	//それをソートして、各mに対して二部探索する

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	make_sum_array(0, 0);
	sort(sum, sum + sum_cnt);

	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int m;
		cin >> m;

		int left = 0;
		int right = sum_cnt - 1;
		while (true)
		{
			if (m < sum[left] || m > sum[right])
			{
				cout << "no" << endl;
				break;
			}
			else if (right - left == 1)
			{
				if (m == sum[left] || m == sum[right])
				{
					cout << "yes" << endl;
					break;
				}
				else
				{
					cout << "no" << endl;
					break;
				}
			}
			else
			{
				if (m == sum[(left + right) / 2])
				{
					cout << "yes" << endl;
					break;
				}
				else if (m < sum[(left + right) / 2])
				{
					right = (left + right) / 2;
				}
				else if (m > sum[(left + right) / 2])
				{
					left = (left + right) / 2;
				}
			}
		}
	}
	return 0;
}