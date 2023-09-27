#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<iostream>
#include<sstream>
#include<utility>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>
#include<stack>
using namespace std;
typedef long long ll;
typedef pair<int,int>P;
map<string,bool>D;
char c[30],s[30];
int N;
int main()
{
	scanf("%d\n",&N);
	for(;N--;)
	{
		scanf("%s%s",c,s);
		if(c[0]=='i')D[string(s)]=true;
		else puts(D[string(s)]?"yes":"no");
	}
	return 0;
}