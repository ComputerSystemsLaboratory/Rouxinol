#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<stack>
#include<functional>
#include<string>
#include<cstring>
using namespace std;
#define LATTE 10000

int main(){
	int S;
	cin>>S;
	printf("%d:%d:%d\n",S/3600,(S%3600)/60,S%60);
    return 0;
}