#include "bits/stdc++.h"
using namespace std;
int d;
int dd[50];
int fib(int a){
	if(a==0||a==1)return dd[a]=1;
	if(dd[a]!=-1)return dd[a];
	return dd[a]=fib(a-1)+fib(a-2);
}

int main() {
int c;
cin>>c;
for (int i = 0; i < 50; ++i) {
	dd[i]=-1;
}

cout<<fib(c)<<endl;
	return 0;
}