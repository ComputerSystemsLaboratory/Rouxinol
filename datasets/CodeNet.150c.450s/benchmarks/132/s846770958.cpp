#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int main(){
	int n, p, now, m[50], k;
	while(1){
		cin >> n >> p;
		if(!n)break;
		for(k=0;k<n;k++){
			m[k] = 0;
		}
		k=0;
		now=p;
		while(1){
			if(now){
				m[k]++;
				now--;
			}
			else{
				now+=m[k];
				m[k]=0;
			}
			if(m[k]==p){
				cout << k << endl;
				break;
			}
			else{
				if(k!=n-1) k++;
				else k = 0;
			}
		}
	}
	return 0;
}