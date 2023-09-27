#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,a[1000]={},cnt=0;
	while(cin >> n){
		if(n==0){
			cout << a[cnt-1] << endl;
			cnt--;
		}else{
			a[cnt]=n;
			cnt++;
		}
	}
	return 0;
}

