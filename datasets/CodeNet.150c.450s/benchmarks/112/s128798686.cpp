#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<vector>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;


int main(){
	int ha[200];
	
	while(1){
	rep(i,200) ha[i]=0;
	
	int n,m;
	scanf("%d",&n);
	if(n==0) break;
	
	char a,b;
	rep(i,n){
		cin>>a>>b;
		ha[a]=b;
	}
	
	scanf("%d",&m);
	
	vector<char> str;
	
	rep(i,m){
		cin>>a;
		if(ha[a]!=0){
			a=ha[a];
		}
		str.push_back(a);
	}
	
	rep(i,str.size()) printf("%c",str[i]);
	puts("");
	}
}
/*
3
A a
0 5
5 4
10
A
B
C
0
1
4
5
a
b
A
*/