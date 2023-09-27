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
	int A,B;
	cin>>A>>B;
	if(A<B) puts("a < b");
	else if(A>B) puts("a > b");
	else puts("a == b");
    return 0;
}