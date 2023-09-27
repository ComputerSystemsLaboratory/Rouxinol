#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#include<complex>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int>PA;
using namespace std;
#define MAX 1000
int main(){
	int n; cin >> n; 
	vi y(1000,0); vi m(1000,0); vi d(1000,0);
	rep(i,n) {cin >> y[i] >> m[i] >> d[i];}
	rep(i,n){
		int sy = y[i],sm = m[i],sd = d[i];
		int ans = 0;
		while(true){
			if(sy % 3 != 0){
				if(sm %2 == 1){
					if(sd == 20){sd = 1; sm++;}
					else sd++;

				}else if(sm % 2 == 0){
					if(sd == 19){sd = 1;sm++;}
					else sd++;
				}
			}if(sy%3 == 0){
				if(sd == 20){sd=1;sm++;}
				else 
					sd++;
			}
			if(sm == 11){sm =1; sy++;}
			if(sy == 1000 && sm == 1 && sd ==1)
				break;
			else
				ans++;
		}
		cout << ans+1 << endl;
	}

}