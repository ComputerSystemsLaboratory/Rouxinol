//??-2015-11-8
# include <cstdio>
# include <algorithm>
# include <cstring>
# include <string>
# include <bitset>
# include <iostream>

using namespace std;

int result,r,c;
bitset<10005>b[20];                                      //bitset其?vector一?，只是它里面存的数字不是0就是1


void Dfs(int level)
{
	if (level == r)                                      //如果已?到了10?了，就到了一个解了
	{
	//	printf("aaa\n");
		int i, j,all_sum = 0;
		for (i = 0; i < c; i++)                           //列不用真的翻
		{
			int sum1 = 0;
			for (j = 0; j < r; j++)
			{
				if (b[j][i])
					sum1++;
			}
			all_sum += max(sum1,r-sum1);
		}
		result = max(result, all_sum);                          //跟新?最大?
		return;                                                 //肯定要返回?
	}
	Dfs(level + 1);                                              //?入左子?
	b[level].flip();                                             //?一?行全?了
	Dfs(level + 1);                                              //?入右子?
}
int main(void)
{
//	freopen("in.txt", "r", stdin);
	int i,j,temp;

	while (scanf("%d%d", &r, &c) != EOF&&r&&c)
	{
		result = 0;                                                    //?一次都要重新?0
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				scanf("%d", &temp);
				b[i][j] = temp;
			}
		}
		Dfs(0);
		printf("%d\n", result);
	}
	return 0;
}
/*
#include <cstdio>
#include <algorithm>
#include <bitset>
#include<iostream>
using namespace std;
const int MAX_R = 10;
const int MAX_C = 10000;
int R, C;
bitset<MAX_C> a[MAX_R];

int ans;
bool tmp;

void dfs(int k)
{
	//    for(int i = 0;i<R;i++)
	//    {
	//        cout<<a[i][k];
	//    }
	//    cout<<endl;
	if (k == R)
	{
		int result = 0;
		for (int j = 0; j < C; j++)
		{
			int upNum = 0;
			for (int i = 0; i < R; i++)
			{
				if (a[i][j]) upNum++;
			}
			result += max(upNum, R - upNum);
		}
		ans = max(ans, result);
		return;
	}
	dfs(k + 1);
	a[k].flip();
	dfs(k + 1);

}
int main()
{
	freopen("in.txt", "r", stdin);
	while (scanf("%d %d", &R, &C))
	{
		if (R == 0 && C == 0) break;
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
			{
				scanf("%d", &tmp);
				a[i][j] = tmp;
			}
		}
		ans = 0;
		dfs(1);
		printf("%d\n", ans);
	}
	return 0;
}
*/