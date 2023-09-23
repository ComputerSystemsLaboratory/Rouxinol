#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;

int c[6]={500,100,50,10,5,1};

int main(){
	int n;
	while(scanf("%d",&n)&&n){
		int m=1000-n;
		int res=0;
		for(int i=0;i<6;i++){ res+=m/c[i]; m%=c[i]; }
		printf("%d\n",res);
	}
}