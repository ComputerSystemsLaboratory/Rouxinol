#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)

int a[120]={0};
int x;
int MAX=0;

int main(){
	while(cin>>x){
		a[x]++;
	}
	rep(i,101){
		MAX = max(MAX,a[i]);
	}
	rep(i,101){
		if(a[i] == MAX){
			cout<<i<<endl;
		}
	}
	return 0;
}