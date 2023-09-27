#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<ctype.h>
#include<stack>
#include<math.h>
#include <string>
#include<algorithm>
#include<iomanip>
#define _for(i,a,b) for(int i = (a);i < (b);i++)
#define mset(x) memset(x,0,sizeof(x));
using namespace std;

int main() {
	long long int c,k,ans,ans1;
	cin>>c>>k;
	ans = c * k;
	ans1 = (c + k) * 2;
	cout<<ans<<" ";
	cout<<ans1<<endl;
	return 0;
}
