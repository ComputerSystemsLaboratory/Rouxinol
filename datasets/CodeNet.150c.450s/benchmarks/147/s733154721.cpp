#include<bits/stdc++.h>
using namespace std;
int s[10001]={0};
int main() {
	long long n;
	cin >> n;
	int s[10001]={0};
	for(int x=1;x*x<=10000;++x){
		for(int y=1;y*y<=10000;++y){
			for(int z=1;z*z<=10000;++z){
				long long a=x*x+y*y+z*z+x*y+y*z+z*x;
				if(a<=10000){
					s[a]++;
				}
			}
		}
	}
	for(int i = 1;i<=n;++i){
		cout << s[i]<< endl;
	}
	return 0;
}