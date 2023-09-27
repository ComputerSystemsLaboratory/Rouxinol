#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>
#include <queue>



using namespace std;



int main()
{
	int n, r, p, c;
	int yama[50], temp[50];
	
	while (cin >> n >> r)
	{
		if (n == 0 && r == 0) break;
		
		//山の初期化
		for (int i=0; i<n; i++)
		{
			yama[i] = n - i;
		}
		
		//カット操作
		for (int i=0; i<r; i++)
		{
			cin >> p >> c;
			for (int j=0; j<p-1; j++)
			{
				temp[c+j] = yama[j];
			}
			for (int j=p-1; j<p+c-1; j++)
			{
				temp[j-p+1] = yama[j];
			}
			for (int j=0; j<p+c-1; j++)
			{
				yama[j] = temp[j];
			}
		}
		
		/*
		//テスト出力
		for (int i=0; i<n; i++)
		{
			cout << yama[i] << endl;
		}
		*/
		
		cout << yama[0] << endl;
	}
	
	return 0;
}