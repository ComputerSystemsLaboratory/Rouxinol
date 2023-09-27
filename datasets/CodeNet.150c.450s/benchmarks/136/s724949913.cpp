#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
typedef long long int lnt;
typedef pair<lnt,lnt> P;
lnt a,b;
lnt euk(lnt x,lnt y){
	if(x<y) return euk(y,x);
	if(y==0) return x;
	return euk(y,x%y);
}

int main()
{
	while(scanf("%lld%lld",&a,&b)!=EOF){
		lnt x=euk(a,b);
		cout<<x<<' '<<a*b/x<<endl;
	}
}