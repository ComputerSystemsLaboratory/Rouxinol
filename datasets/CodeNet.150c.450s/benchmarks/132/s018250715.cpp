#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

typedef long long LL;
#define rep(i ,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define all(v) (v).begin(),(v).end()
#define arycpy(ary1,ary2,N) memcpy(ary2,ary1,sizeof(int)*N) //ary1:???????????? ary2:????????????
typedef vector<int> vi;


int main(){
	int n, p;
	while (cin >> n >> p){
		if (n == 0&&p == 0) break;
		vi num(n, 0);
		int i = 0;
		int pp = p;
		while (1){

			if (p > 0){
				p--;
				num[i]++;
				if (p == 0 && num[i] == pp) break;
			} else{
				if (num[i] > 0){
					p += num[i];
					num[i] = 0;
				}
			}
			i++;
			i = i%n;
		}
		

		for (int j = 0; j < n; j++){
			if (num[j]==p){
				cout << i  << endl;
				break;
			}
		}
	}
	return 0;
}