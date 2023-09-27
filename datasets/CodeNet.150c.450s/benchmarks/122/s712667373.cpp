#include<cstdio>
#include<set>
#include<iostream>
#include <iterator>
#include <utility>
#include<map>
#include<queue>
#define maxn 2000000
using namespace std;
int n,a[maxn];
int main()
{
	priority_queue<int>P;
	string s;
	while(cin>>s)
	{
		if(s=="end")
		break;
		if(s=="insert")
		{
			int a;
			cin>>a;
			P.push(a); 
		}
		else if(s=="extract")
		{
			cout<<P.top()<<endl;
			P.pop();
		}
	}
	return 0;
}
