#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<sstream>
#include<iomanip>

using namespace std;

#define INF 999999999

int main(){
	int ans, i, j, k, e;
	while(1){
		cin >> e;
		if(!e)break;
		ans=INF;
		for(i=0;i*i*i<=e;i++){
			for(j=0;i*i*i+j*j<=e;j++){
				if(i+j+(e-i*i*i-j*j) < ans){
					ans = i+j+(e-i*i*i-j*j);
				}
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}