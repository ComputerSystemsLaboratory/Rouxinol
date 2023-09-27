#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<map>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> pii;

int main(){
	A:;
	
	int n;
	cin>>n;
	if(n==0)return 0;
	
	map<int,pii> box;
	box[0] = pii(0,0);
	
	int minix = 0;
	int maxix = 0;
	int miniy = 0;
	int maxiy = 0;
	
	reps(i,1,n){
		int a,b;
		cin>>a>>b;
		int dx[]={-1,0,1,0};
		int dy[]={0,1,0,-1};
		
		int x = box[a].first;
		int y = box[a].second;
		
		int nx = x+dx[b];
		int ny = y+dy[b];
		
		minix = min(minix, nx);
		miniy = min(miniy, ny);
		maxix = max(maxix, nx);
		maxiy = max(maxiy, ny);
		
		box[i] = pii(nx,ny);
	}
	
	printf("%d %d\n",(maxix-minix+1),(maxiy-miniy+1));
	
	goto A;
}