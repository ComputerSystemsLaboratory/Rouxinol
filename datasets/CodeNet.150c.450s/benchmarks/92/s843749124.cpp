#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define REP(i,N) for(int i = 0; i < (int)N; i++)

int main(){
	int a,b;
	while(cin >> a >> b){
		int c=a+b;
		if(c==0){
			cout << 0 << endl;
			continue;
		}
		int count = 1;
		while(c >= 10){
			c/=10;
			count++;
		}
		cout << count << endl;
	}
	return 0;
}