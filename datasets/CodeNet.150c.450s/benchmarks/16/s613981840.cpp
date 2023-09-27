/*
时间:2020-7-29
书籍：算法和数据结构
内容：数据结构的应用-计算面积
页数：P86
*/
#include<iostream>
#include<stack>
#include<utility>            //pair头文件
#include<vector>
using namespace std;
int main()
{
	stack<int> S1;
	stack<pair<int, int> > S2;                //S2中包含一对数据，分别是该积水最左侧 \ 的位置和该积水处当前的位置
	//stack<pair<int, int>> S2;                //定义模板少了一个空格，部分编译器会报错。
	char ch;
	int sum = 0;
	for (int i = 1; (ch = cin.get()) != '\n'; ++i)
	{
		if (ch == '\\')
			S1.push(i);
		else if (ch == '/'&&S1.size()>0)
		{
			int j = S1.top(); S1.pop();           //j代表当前 / 对应 \ 的位置
			int a = i - j;
			sum += a;
			while (S2.size() > 0 && S2.top().first > j)       //看小的积水是否可以融合成大的积水
			{
				a += S2.top().second; S2.pop();
			}
			S2.push(make_pair(j, a));             //形成新的积水
		}
	}
	vector<int> area;
	while (S2.size() > 0)
	{
		area.push_back(S2.top().second); S2.pop();                 //取出每块积水面积
	}
	cout << sum << endl;
	cout << area.size();
	for (int i = area.size() - 1; i > 0; --i)
	{
		cout<<" " << area[i];                         //注意考虑0的时候表现形式，因此将” “提前
	}
	if(area.size())
		cout <<" "<< area[0];                       //可能不存在积水的情况，极端情况，所以不可以直接area[0];
	cout << endl;
	return 0;
}
