#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	 
	bool prim[1000001];
	for(int i=0;i<1000001;i++) prim[i] = true;
	prim[1]=false;
	for(int i=3;i<1000001;i++){
		if(i%2==0) prim[i] = false;
		else if(prim[i]){
			for(int j=i*2;j<=1000001;j+=i) prim[j] = false;
		}
	}
	

	while(cin >> n){
		int ans=0;
		for(int i=1;i<=n;i++){
			if(prim[i]) ans++;
		}
		cout << ans << endl;
	}
}