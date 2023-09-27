#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int w,n;
	cin>>w>>n;
	int c[31];
	for(int i=1;i<=w;i++)c[i]=i;
	for(int i=1;i<=n;i++){
		int a,b;
		scanf("%d,%d",&a,&b);
		swap(c[a],c[b]);
	}
	for(int i=1;i<=w;i++)cout<<c[i]<<endl;
}