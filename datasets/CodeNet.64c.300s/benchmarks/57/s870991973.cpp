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
int sen[10][10000];
int w,h,ans,mai,x;
int main()
{
while(1){
	cin>>h>>w;
if(!h&&!w) return 0;
ans=0;
	for(int i=0;i<h;i++) for(int j=0;j<w;j++) cin>>sen[i][j];
	for(int i=0; i < 1<<h ; i++){
		mai=0;
		for(int j=0;j<w;j++){
			x=0;
			for(int k=0;k<h;k++){
				if( (i>>k & 1) != (sen[k][j]) ) x++;
			}
			mai+=max(x,h-x);
		}
		ans=max(ans,mai);
	}
	cout<<ans<<endl;
}}