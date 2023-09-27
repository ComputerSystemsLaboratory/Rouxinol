#include<cstdio>
#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#include<set>
#include<string>
#include<cstring>
#include<math.h>
#include<algorithm>
#include<map>

#include<sstream>
#include<ctype.h>

#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
 
typedef long long ll;
using namespace std;
 
const int INF = 0x7f7f7f7f;
const double PI = acos(-1.0);
const int maxn = 1005;
const int MOD = (int)1e9+7;
#define LOCAL 0
#define MOD 1000000007

int a[15],l[15],r[15];
bool res;

bool dfs(int apos,int lpos,int rpos){
	
	if(apos == 11)	return true;
	if(a[apos] > l[lpos-1]){
		l[lpos] = a[apos];
		if(dfs(apos+1,lpos+1,rpos)) return true;
	} 
	if(a[apos] > r[rpos-1]){
		r[rpos] = a[apos];
		if(dfs(apos+1,lpos,rpos+1)) return true;
	} 
	return false;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		memset(a,0,sizeof(a));
		memset(l,0,sizeof(l));
		memset(r,0,sizeof(r));
		for(int i = 1 ; i <= 10 ; i ++) 	scanf("%d",&a[i]);		
		if(dfs(1,1,1)){
			cout << "YES" << endl;	
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}