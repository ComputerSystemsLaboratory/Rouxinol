#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

bool prime(int p){
	if ((p==0)||(p==1)){return false;}
	else if(p==2){return true;}
	else{
		for(int i=2; i*i<=p; i++){
			if(p%i == 0){return false;}
		}
	}
	return true;
}

int main()
{
	int a,d,n,c,ans;

	while(cin >> a >> d >> n){
		if((a==0)&&(d==0)&&(n==0)){return 0;}
		c=0; ans=0;
		for(int i=0; c<n; i++){
			if( prime( (a+(i*d)) ) ){c++; ans=a+(i*d);}
		}
		cout << ans << endl;
	}
}