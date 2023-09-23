#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


int n,s;
int used[10];

int saiki(int depth){
	if(depth==n){
		int p = 0;
		rep(i,10)if(used[i]==1)p+=i;
		if(p==s)return 1;
		return 0;
	}
	int ret = 0;
	
	for(int i=9;i>=0;i--){
		if(used[i]==0){
			used[i]=1;
			ret += saiki(depth+1);
			used[i]=0;
		}else{
			break;
		}
	}
	return ret;
}

int main(){
	rep(i,10)used[i]=0;
	
	while(1){
		cin>>n>>s;
		if(n==0)break;
		printf("%d\n",saiki(0));
	}
}