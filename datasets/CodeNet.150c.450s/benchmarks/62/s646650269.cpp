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
	int A[3];
	for(int i=0;i<3;i++) cin>>A[i];
	sort(A,A+3);
	printf("%d %d %d\n",A[0],A[1],A[2]);
    return 0;
}