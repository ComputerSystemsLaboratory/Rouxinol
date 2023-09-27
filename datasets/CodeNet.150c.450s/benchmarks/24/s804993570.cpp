#include <iostream>
#include <vector>
#include <algorithm>

# define REP(i,n) for(int i=0; i<n;i++)

using namespace std;

int main(){
	while(1){
		long long int n, m, p, d, ans;
		vector<pair<int,int> > pd;
		cin >> n >> m;
		if (n==0 && m==0) return 0;
		ans = 0;
		
		REP(i,n){
			cin >> d >> p;
			pd.push_back(make_pair(p,d));
		}
		
		sort(pd.begin(), pd.end(), greater<pair<int,int> >() );
		
		REP(i,n){
			p = pd[i].first;
			d = pd[i].second;
			if (m>0){
				if (m<d){
					ans += (d-m)*p;
				}
				m -= d;
			}else{
				ans += d*p;
			}
		}
		
		cout << ans << endl;
	}
	return 0;
}


