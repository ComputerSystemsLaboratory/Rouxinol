#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string.h>
#include<map>
#include<queue>

using namespace std;

typedef pair<int,int> pii;

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)
#define in(i,j,k) ((i)>=(j)&&(i)<=(k))

int main(){
	int n,s,a,c;
	vector<int> v;
	for(;;){
		scanf("%d%d",&n,&s);
		if(n==0 && s==0)break;
		v.clear();
		rep(i,10)v.push_back(i<n);
		c=0;
		do{
			a=0;
			rep(i,10)a+=i*v[i];
			c+=(s==a);
		}while(prev_permutation(v.begin(),v.end()));
		printf("%d\n",c);
	}
	return 0;
}