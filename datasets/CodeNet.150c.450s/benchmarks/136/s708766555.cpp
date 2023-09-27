#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main(){
	int n = 45000;
	int p[n];
	for(int i=0;i<n;i++) p[i] = 0;
	for(int i=2;i<n;i++){
		if(p[i]==0) for(int j=2;j<n/i;j++) p[i*j] = 1;
	}
	int q[n];
	int c = -1;
	for(int i=2;i<n;i++){
		if(p[i]==0){
			c++;
			q[c] = i;
		}
	}
	long a,b;
	while(cin >> a >> b){
		int t[c],s[c];
		for(int i=0;i<c;i++) t[i] = 0;
		for(int i=0;i<c;i++) s[i] = 0;
		int as = a;
		while(1){
			int temp = as;
			for(int i=0;i<c;i++){
				if(as%q[i]==0){
					s[i]++;
					as = as/q[i];
				}
			}
			if(temp==as) break;
		}
		int at = b;
		while(1){
			int temp = at;
			for(int i=0;i<c;i++){
				if(at%q[i]==0){
					t[i]++;
					at = at/q[i];
				}
			}
			if(temp==at) break;
		}
		long z = 1;
		if(at==as) z = at;
		long y = z;
		for(int i=0;i<c;i++){
			y *= pow(q[i],max(s[i],t[i]));
			z *= pow(q[i],min(s[i],t[i]));
		}
		cout << z << " " << y << endl;
	}
}