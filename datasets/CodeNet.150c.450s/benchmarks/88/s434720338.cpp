#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)


#define all all(v) v.begin(),v.end()
#define INF 1<<30
#define mp make_pair
#define pb push_back

#define fi first
#define se second

#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)

typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> pii;

typedef long long ll;

// struct cho{
// 	int a;
// 	int x;
// 	int y;
// }


int main(){
	while(1){
		int h,w;
		cin >>h>>w;

		if(h==0) break;
		int ah=150,aw=150;
		int at=150*150+150*150;
		for(int x=1;x<151;x++){
			for(int y=x-1;y>0;y--){
				if(h==y&&w==x) continue;
				
				ll t = x*x+y*y;

				if(h*h+w*w <= t){
					at = ah*ah+aw*aw;
					if(h*h+w*w == t){
						if(h >= y) continue;
					}
					if(t < at){
						ah = y;
						aw = x;
					}else if(t == at){
						if(ah > y){
							ah = y;
							aw = x;
						}
					}
				}

				
			}
		}
		cout << ah << " " << aw <<endl;

	}
	return 0;
}