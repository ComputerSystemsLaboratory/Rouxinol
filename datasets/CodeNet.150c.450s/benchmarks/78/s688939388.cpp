#include<bits/stdc++.h>
using namespace std;
#define print(a) cout<<a<<endl;
int aaa[200] = {}, bbb[200] = {}, counta=1,countb=1,xxx[1100000] = {}, yyy[1100000] = {};

int foo(int n, int x){
	int mi = 1000000;
	if(xxx[n]) return xxx[n]+x;
	if(x > 5) return mi;
	for(int i = counta-1; i >= 1; i--){
		if(aaa[i] < n){
			mi = min(foo(n-aaa[i],x+1), mi);
			if(mi - n == 1)break;
		}
	}
	
	xxx[n] = mi;
	return mi;
}
int boo(int n, int x){
	int mi = 1000000;
	if(yyy[n]) return yyy[n]+x;
	for(int i = countb-1; i >= 1; i--){
		if(bbb[i] < n){
			mi = min(boo(n-bbb[i],x+1), mi);
			if(mi - n == 1)break;
		}
	}
	yyy[n] = mi;
	return mi;
}

int main(){
	int i, n, abc;
	for(i = 1; abc <= 1000000; i++){
		abc = (i*(i+1)*(i+2))/6;
		xxx[abc] = 1;
		if(abc%2){
			yyy[abc] = 1;
			bbb[countb++] = abc;
		}
		aaa[counta++] = abc;
	}
	for(i = 1; i <= 1000000; i++){
		xxx[i] = foo(i, 0);
		yyy[i] = boo(i, 0);
	}
	while(1){
		cin>>n;
		if(n == 0) break;
		cout<<xxx[n]<<" "<<yyy[n]<<endl;
	}
	return 0;
}

