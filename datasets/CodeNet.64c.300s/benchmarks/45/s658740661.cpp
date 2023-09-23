#include <iostream>

# define REP(i,n) for(int i=0; i<n;i++)

using namespace std;

int main(){
	while(1){
		int n, m, p, x, total, tickets;
		double ans;
		cin >> n >> m >> p;
		if (n==0 && m==0 && p==0) return 0;
		total = 0;
		for(int i=1; i<=n; i++){
			cin >> x;
			total += x;
			if (i==m) tickets = x;
		}
		if (tickets==0) ans = 0;
		else	 ans = (total*(100-p))/tickets;
		cout << (int)ans << endl;
	}
	return 0;
}


