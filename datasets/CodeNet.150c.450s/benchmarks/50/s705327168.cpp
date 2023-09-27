#include <bits/stdc++.h>
using namespace std;

#define llong long long
#define inf 999999999
#define mp make_pair
#define pb push_back
#define fn fill_n
typedef pair<int, int> P;
typedef pair<P, int> PP;
typedef pair<PP, int> PPP;
typedef struct data{
	int now;
	int cost;
}data;
int nh[4] = {1, 0, -1, 0};
int nw[4] = {0, 1, 0, -1};





int main(){
	int a, b;
	while(cin >> a, a){
		b = 1000 - a;
		int ret = 0;
		while(b != 0){
			if(b >= 500){
				ret+= b/500;
				b %= 500;
			}else if(b >= 100){
				ret += b/100;
				b %= 100;
			}else if(b >= 50){
				ret += b/50;
				b %= 50;
			}else if(b >= 10){
				ret += b/10;
				b %= 10;
			}else if(b >= 5){
				ret += b/5;
				b %= 5;
			}else{
				ret += b;
				b = 0;
			}
		}
		cout << ret << endl;
	}

	return 0;
}
