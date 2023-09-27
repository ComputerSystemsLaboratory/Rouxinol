#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <queue>
#include <string>
#include <stack>
#include <utility>
#include <queue>
#include <cmath>
#define mp make_pair
#define pii pair<int,int> 
#define ff first
#define ss second
#define ll long long 
#define vi vector<int>

using namespace std;

int counts[1000];
char str[1000][100];
int maxl,i,indexml,indexma;

int main()
{
	maxl=0;
	indexml=0;
	indexma=0;
	i=0;
	memset(counts, 0, sizeof(counts));
	while(scanf("%s",str[i])!=EOF)
	{
		//if(str[i][0]=='z')break;
		if(maxl<strlen(str[i]))
		{
			maxl=strlen(str[i]);
			indexml=i;
		}
		for(int z=0;z<i;z++)
		{
			if(strcmp(str[i],str[z])==0)
			{
				counts[z]++;
				i--;
				break;
			}
		}
		i++;
	}
	for(int c=0;c<i;c++)
	{
		if(counts[indexma]<counts[c])
		indexma=c;
	}
	printf("%s %s\n",str[indexma],str[indexml]);
	return 0;
}