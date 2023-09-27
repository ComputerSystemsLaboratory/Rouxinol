#define _USE_MATH_DEFINES
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int num[5];
	for(int i=0;i<5;i++){
		scanf("%d",num+i);
	}
	sort(num,num+5,greater<int>());

	for(int i=0;i<5;i++){
		printf("%d%s",num[i],i==4 ? "\n" : " ");
	}
	return 0;
}