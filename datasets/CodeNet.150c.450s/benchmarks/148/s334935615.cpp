#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)
#define ALL(a) (a).begin(),(a).end()
#define SORT(a) sort((a).begin(),(a).end())
#define RSORT(a) sort((a).rbegin(),(a).rend())
#define ll long long
#define pb(a) push_back(a)

#define PRINTV(v) {for(ll deB=0; deB<(v).size(); deB++){cout << (v)[deB] << " ";}cout << endl;}

int main(){
	
	
	ll N;
	vector<ll> c(4,0);
	cin >> N;
	REP(i,N){
		string s;
		cin >> s;
		if(s=="AC"){
			c[0]++;
		}else if(s=="WA"){
			c[1]++;
		}else if(s=="TLE"){
			c[2]++;
		}else{
			c[3]++;
		}
	}
	cout << "AC x " << c[0] << endl;
	cout << "WA x " << c[1] << endl;
	cout << "TLE x " << c[2] << endl;
	cout << "RE x " << c[3] << endl;
	
	return 0;
}