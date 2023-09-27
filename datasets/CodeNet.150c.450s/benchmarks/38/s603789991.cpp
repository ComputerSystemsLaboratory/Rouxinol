#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

long dd(int n){
	return n*n;
}

int main(){
	int n, t[3];
	
	cin >> n;
	for(int i=0; i<n; ++i){
		for(int j=0; j<3; ++j)
		scanf(" %d", &t[j]);
	 		
		sort(t, t+3);
		
		if( dd(t[2]) == dd(t[0])+dd(t[1]) ) printf("YES\n");
		else printf("NO\n");
	}
	 
	return 0;
}