#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define swap(a,b) tmp=ver[b], ver[b]=ver[a], ver[a]=tmp;
int main(){
	int w, n;
	int ver[30];
	int a, b, tmp;
	cin >> w >> n;
	rep(i, w) ver[i]=i+1;
	rep(i, n){
		scanf("%d,%d", &a, &b);
		swap(a-1,b-1);
	}
	rep(i, w) cout << ver[i] << endl;
	return 0;
}