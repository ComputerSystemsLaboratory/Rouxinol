/*
	AOJ 0510 JOI yo 2005 2006 1 Score
*/

//ミスを防ぐためにまずは基本のIncludeをすべて格納する

#include<fstream>
#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
#include<set>
#include<map>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<vector>
#define INF (1<<21)
using namespace std;
typedef pair<int,int> P;

//ここまで基本型、多少の変更はあるけどまあいける

int main()
{
	int a[4],b[4];
	int asum,bsum;


	cin >>a[0]>>a[1]>>a[2]>>a[3];
	cin >>b[0]>>b[1]>>b[2]>>b[3];

	asum=a[0]+a[1]+a[2]+a[3];
	bsum=b[0]+b[1]+b[2]+b[3];

	int high;

	high=asum;
	if (bsum>asum) {high = bsum;}
	
	cout<<high<<endl;

	return 0;
}