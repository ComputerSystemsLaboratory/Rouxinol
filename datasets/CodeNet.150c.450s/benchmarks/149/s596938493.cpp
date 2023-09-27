
/*
ID: pktyagi1
LANG: C++
TASK: ttwo
*/
#include<stack>
#include<iostream>
#include<cstdio>
#include<stdio.h>
#include<cstring>
#include<vector>
#include<iostream>
#include<math.h>
#include<map>
#include<algorithm>
#include<set>
#include<string>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d\n",n)
#include <iostream>
#include <fstream>
#define fs(n) fscanf(fin,"%d",&n)
#define fp(n) fprintf(fout,"%d\n",n)
using namespace std;
typedef long long ll;
int p[100010];
int father(int x)
{
	if(x==p[x])
	return x;
	else 
	return father(p[x]);
	
}
void unite(int x,int y)
{
	int xroot,yroot;
xroot=father(x);
yroot=father(y);
p[yroot]=xroot;
	}

int same(int x,int y){
	int xroot,yroot;
	xroot=father(x);
	yroot=father(y);
	if(xroot==yroot)
	return 1;
	else
	return 0;
	
}

 int main () {
   // FILE *fin  = fopen ("ttwo.in", "r");
   // FILE *fout = fopen ("ttwo.out", "w");
    //ofstream fout ("zerosum.out");
  //ifstream fin ("zerosum.in");
  int n,q;
  
  scanf("%d%d",&n,&q);
  for(int i=0;i<=n;i++)
  p[i]=i;
  int com,x,y;
 for(int i=0;i<q;i++)
  {scanf("%d%d%d",&com,&x,&y);
  if(com==0)
  unite(x,y);
  else
  printf("%d\n",same(x,y));
  }
return (0);
}