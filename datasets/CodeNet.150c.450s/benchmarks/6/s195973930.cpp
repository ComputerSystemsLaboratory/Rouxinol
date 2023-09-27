#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<queue>
#include<set>
#include<vector>
#define INF 100000000

#define MAX_N 10000
#define MAX_M 100

typedef long long int ll;
using namespace std;



int main(){

	int a,b,c;

	scanf("%d %d %d", &a, &b, &c);

	if(a < b && b < c)
		printf("Yes\n");
	else
		printf("No\n");




	return 0;

}