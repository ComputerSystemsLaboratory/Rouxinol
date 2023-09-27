#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)



int main(){
	
	vector<int> a;
	rep(i,5){
		int b;
		cin>>b;
		a.push_back(b);
	}
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	rep(i,5){
		if(i!=0)printf(" ");
		printf("%d",a[i]);
	}puts("");
}