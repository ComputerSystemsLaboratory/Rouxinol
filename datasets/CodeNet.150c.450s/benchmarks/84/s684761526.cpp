#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;
#define MAX_N 200010
#define int long long

int bit[MAX_N], n, a[MAX_N], ma, b[MAX_N];

int sum(int i){
	int s = 0;
	
	while(i > 0){
		s += bit[i];
		i -= i & -i;
	}
	return s;
}

void add(int i , int x){
	while(i <= n){
		bit[i] += x;
		i += i & -i;
	}
}

signed main(){
	int ans = 0;
	map<int,int> ma;
	cin>>n;
	
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
		b[i]++;
		a[i] = b[i];
	}
	sort(b,b+n);
	for(int i = 0; i < n; i++)
		ma[b[i]] = i+1;
	for(int i = 0; i < n; i++)
		a[i] = ma[a[i]];
	
	for(int i = 0; i < n; i++){
		ans += i - sum(a[i]);
		add(a[i],1);
	}
	cout<<ans<<endl;
	return 0;
}
