#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define REP(i,N) for(int i = 0; i < (int)N; i++)


int main(){
	int n;
	cin >> n;
	LL money = 100000;
	REP(i,n){
		money += money*5/100;
		REP(i,3){
			if(money % (int)pow(10,i+1) != 0){
				money /= 1000;
				money *= 1000;
				money += 1000;
				break;
			}
		}
	}
	cout << money << endl;
	return 0;
}