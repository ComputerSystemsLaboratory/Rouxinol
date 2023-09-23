#include <bits/stdc++.h>
using namespace std;
int main(){
	long long d;
	while(cin >> d){
		long long ans=0;
		for(int i=0;i<600;i+=d){
			if(i+d<=600){
				ans+=i*i*d;
			}else{
				ans+=i*i*(600-d);
			}
		}
		cout << ans << endl;
	}
	return 0;
}

