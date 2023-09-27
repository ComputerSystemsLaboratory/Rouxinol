#include <iostream>
#include <map>

#define rep(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main(void)
{
	long n, m;
	while(cin >> n >> m, n > 0){
		map<long, long> pd;
		long ans=0;
		//map pdを構成
		rep(i, n){
			int d, p;
			cin >> d >> p;
			if (pd.count(p) == 0){
				pd.insert(make_pair(p, d));
			}else{
				pd[p] += d;
			}
		}
		for(auto itr = pd.rbegin(); itr != pd.rend(); itr++){
			if (m > itr->second){
				m -= itr->second;
			}else{
				ans += itr->first * (itr->second - m);
				m = 0;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
