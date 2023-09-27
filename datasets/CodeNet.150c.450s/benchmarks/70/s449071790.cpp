#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;

#define EPS 1e-8

int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
vector<string> yobi ={"Monday", "Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

int main(){
	
	int m, d;
	while(cin >> m >> d, m, d){
		ll cnt = 3;
		rep(i, m-1) cnt += days[i];
		cnt += (d-1);
		cout << yobi[cnt%7] << endl;
	}
	


	
	return 0;
}