#include <vector>
#include <iostream>
#include <valarray>
#include <string>
#include <algorithm>
#include <set>
#include <climits>
typedef unsigned long long ull;
typedef long long ll;
#define fst first
#define snd second
#define mp make_pair
#define pb push_back
#define rep(i,n) for(ull i = 0;i<(n);i++)
#define rep1(i,n) for(ull i = 1;i<=(n);i++)
#define revrep(i,n) for(ull i = (n-1);i>=0;i--)
#define all(n) (n).begin(),(n).end()
#define show(x) cout << "debug " << #x << ":" << x << endl;
#define showvec(x) cout << endl << "debug " << #x << ";" << endl; \
    for(ull __i = 0;__i < x.size();__i++){ \
        for(ull __j = 0;__j<x[0].size();__j++){ \
            cout << x[__i][__j] << " "; \
        } \
        cout << endl; \
    } \
    cout << endl;
using namespace std;

vector<pair<int,int> > G[1002];
int V,E,r;
ll d[1002];
int main(){
	bool negative = false;
	rep(i,1002){
		d[i] = LLONG_MAX / 3;
	}
	cin >> V >> E >> r;
	rep(_e,E){
		int _s,_t,_d;
		cin >> _s >> _t >> _d;
		G[_s].push_back(make_pair(_t,_d));
	}
	d[r] = 0;
	rep(_v,V){
		rep(v1,V){
			rep(_e,G[v1].size()){
				pair<int,int> e = G[v1][_e];
				int v2 = e.first;
				if(d[v1] != LLONG_MAX / 3 && d[v2] > d[v1] + e.second){
					if(_v >= V - 1){
						negative = true;
						break;
					}
					d[v2] = d[v1] + e.second;
				}
			}
			if(negative) break;
		}
		if(negative) break;
	}

	if(negative){
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}
	rep(i,V){
		if(d[i] == LLONG_MAX / 3){
			cout << "INF" << endl;
		}else{
			cout << d[i] << endl;
		}
	}
	return 0;
}