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
int n;
int ba[10];
bool bfs(int l,int r,int x)
{
	if(x==10) return true;
	if(ba[x]<l&&ba[x]<r) return false;
	if(l<ba[x]&&bfs(ba[x],r,x+1)) return true;
	if(r<ba[x]&&bfs(l,ba[x],x+1)) return true;
	return false;
}

int main()
{
	cin>>n;
	for(;n>0;n--){
		for(int i=0;i<10;i++){
			scanf("%d",&ba[i]);
		}
		if(bfs(0,0,0)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}