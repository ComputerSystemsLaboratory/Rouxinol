#include<iostream>
#include<cstdio>
using namespace std;
signed main(){
	int a;
	while( scanf("%d", &a) != EOF ){
		int ans = 0;
		for(int i=a;i<600;i+=a){
			ans += i*i*a;
		}
		cout << ans << endl;
	}
	return 0;
}