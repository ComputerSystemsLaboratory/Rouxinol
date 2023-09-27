//Bokann ga bokka--nn!!
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
int main(){
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(!n) return 0;
		map<char,pair<char,bool> >ch;
		for(int i=0;i<n;i++)
		{
			char x,y;
			cin >>x >> y;
			ch[x]=mp(y,1);
		}
		int m;
		scanf("%d",&m);
		string ret="";
		for(int i=0;i<m;i++)
		{
			char s;
			cin >> s;
			if(ch[s].second)
			{
				ret+=ch[s].first;
			}
			else
			{
				ret+=s;
			}
		}
		cout << ret << endl;
	}
}