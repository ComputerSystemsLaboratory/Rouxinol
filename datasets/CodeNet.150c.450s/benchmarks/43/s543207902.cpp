#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define REP(i,N) for(int i = 0; i < (int)N; i++)

int main(){
	int n;
	int reta,retb;
	while(cin >> n){
		if(n==0)break;
		reta=retb=0;
		REP(i,n){
			int a,b;
			cin >> a >> b;
			if(a > b){
				reta += a+b;
			}else if(b > a){
				retb += a+b;
			}else{
				reta += a;
				retb += b;
			}
		}
		cout << reta << " " << retb << endl;
	}
	return 0;
}