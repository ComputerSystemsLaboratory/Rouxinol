#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define RREP(i,a,b) for(int i=(a);i>=(b);i--)
#define pq priotity_queue
typedef long long ll; typedef long double ld;
using namespace std;
const int INF=1e9, MOD=1e9+7, around[]={0,1,1,-1,-1,0,-1,1,0,0};
const ld PI=abs(acos(-1));
int n,a,li[100010];

int main(){
	cin >> n >> li[0];
	
	int l=1;
	REP(i,1,n){
		cin >> a;
		if(li[l-1]<a) li[l++]=a;
		else *lower_bound(li,li+l,a)=a;
	}
	
	cout << l << endl;
	return 0;
}