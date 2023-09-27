#include<bits/stdc++.h>
using namespace std;

int main(){

	long int e;

	cin >>e;

	while(!(e == 0)){
		long int ans = 2000000;

		for(int i = 0;i*i*i <= e; i++){
			for(int j = 0; j * j <= e-i*i*i;j++){
				long int  m = e - (i*i*i-i)-(j*j-j);
				if(m > 0){
					ans = min(ans,m);
				}
			}
		}
		cout <<ans<<endl;
		cin >>e;
	}
	return 0;
}

