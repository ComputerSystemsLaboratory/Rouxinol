#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

int main(){
	vector<int> a(3);
	rep(i,3)cin>>a[i];
	sort(a.begin(), a.end());
	
	printf("%d %d %d\n",a[0],a[1],a[2]);
}