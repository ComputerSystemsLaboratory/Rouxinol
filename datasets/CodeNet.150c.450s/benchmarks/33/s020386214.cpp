#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int main(){
	int x, y, z, ans;
	while(1){
		cin >> x >> y >> z;
		if(!x) break;
		ans=0;
		for(int i=1;i<=z;i++){
			for(int j=1;i+j<=z;j++){
				if(i+j+i*x/100+j*x/100==z){
					if(i+j+i*y/100+j*y/100 > ans){
						ans = i+j+i*y/100+j*y/100;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}