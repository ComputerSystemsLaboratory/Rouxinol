#include<iostream>
#include<cctype>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<cctype>
#include<cstring>
#include<utility>
#include<cmath>
const int inf=0x7fffffff;
typedef long long int ll;
using namespace std;
#define L 0
#define R 1
int B[10+5];
vector <int > T[2];
bool flag;
void solve(int i){
	if(flag)return;
	if(i==10){flag=1;return;}
	for(int C=0;C<2;C++){
//	cout<<i<<flag<<endl;
//	cout<<T[C].back()<<endl;
//	cout<<B[i]<<endl;
	if(T[C].back()<B[i]){
		T[C].push_back(B[i]);
		solve(i+1);
		T[C].pop_back();
//		for(int x:T[C]){
//			cout<<x<<' ';
//		}
//		cout<<endl;
	}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		for(int i=0;i<=9;i++){
			scanf("%d",B+i);
		}
		flag=0;
		T[R].push_back(0);
		T[L].push_back(0);
		solve(0);
		puts(flag?"YES":"NO");
	}
	return 0;
}
//aoj0033.cc
//generated automatically at Thu Sep  8 18:32:18 2016
//by xsthunder