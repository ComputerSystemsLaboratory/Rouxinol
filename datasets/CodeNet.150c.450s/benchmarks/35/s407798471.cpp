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
	int n,t,a;
	vector<int> v;
	for(;;){
		scanf("%d",&n);
		if(n==0)break;
		v.clear();
		rep(i,n){
			scanf("%d",&t);
			v.push_back(t);
		}
		//sort(v.begin(),v.end());
		partial_sum(v.begin(),v.end(),v.begin());
		a=v[0];
		rep(i,n){
			reps(j,0,i){
				t=v[i];
				if(j!=i)t-=v[j];
				a=max(a,t);
			}
		}
		printf("%d\n",a);
	}
	return 0;
}