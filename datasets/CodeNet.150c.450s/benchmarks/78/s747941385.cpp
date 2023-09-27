#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<string>
#include<queue>
#include<complex>
#include<numeric>
#include<bitset>
#define INF 1001001001
#define EPS 0.000000001

#define x first
#define y second
#define M 1000000

using namespace std;
typedef vector<int> vint;
typedef vector<vint> vvint;
typedef pair<int,int> pint;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
//int dx[8] = {0,1,1,1,0,-1,-1,-1};
//int dy[8] = {1,1,0,-1,-1,-1,0,1};

int nextInt(){
	int x;
	scanf("%d",&x);
	return x;
}


int main(){
	vint ss;
	vint so;
	
	static int nums[M+1];
	static int numo[M+1];
	
	for(int i=0; i<=M; i++){
		nums[i] = INF;
		numo[i] = INF;
	}
	
	for(int i=1; i<200; i++){
		int n = i*(i+1)*(i+2)/6;
		if(n>M) break;
		
		ss.push_back(n);
		nums[n]=1;
		if(n%2==1){
			so.push_back(n);
			numo[n]=1;
		}
	}
	
	for(int i=1; i<=M; i++){
		for(int j=0; j<ss.size(); j++){
			if(i+ss[j]>M) break;
			nums[i+ss[j]] = min(nums[i+ss[j]], nums[i]+1);
		}
		for(int j=0; j<so.size(); j++){
			if(i+so[j]>M) break;
			numo[i+so[j]] = min(numo[i+so[j]], numo[i]+1);
		}
	}
	
	while(1){
		int a = nextInt();
		if(a==0) break;
		printf("%d %d\n", nums[a], numo[a]);
	}
	return 0;
}