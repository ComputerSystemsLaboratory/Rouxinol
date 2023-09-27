/*
 *	問題: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2015&lang=jp
 *	所要時間: 
 *	解法: 
 *	詰まった点: 
*/
#include <iostream>
//#include <iomanip>
//#include <string>
//#include <algorithm>
//#include <utility>
//#include <stack>
//#include <queue>
//#include <tuple>
//#include <set>
#include <map>
//#include <unordered_map>
//#include <vector>
//#include <functional>
//#include <bitset>
//#include <cmath>
using namespace std;

typedef long long lint;
typedef unsigned long long ulint;

int main(){
	int N,M;
	while(cin >> N >> M){
		if(N==0 && M==0) break;

		int h[1500],w[1500];
		for(int i=0;i<N;i++) cin >> h[i];
		for(int j=0;j<M;j++) cin >> w[j];
		map<int,int> hs,ws;
		hs.clear();	ws.clear();
		
		for(int i=0;i<N;i++){
			int hc=0;
			for(int j=i;j<N;j++){
				hc+=h[j];
				hs[hc]++;
			}
		}
		for(int i=0;i<M;i++){
			int wc=0;
			for(int j=i;j<M;j++){
				wc+=w[j];
				ws[wc]++;
			}
		}

		int hm=hs.rbegin()->first, wm=ws.rbegin()->first;
		int max=(hm>wm?hm:wm);
		lint ans=0;
		for(int i=1;i<=max;i++){
			ans+=hs[i]*ws[i];
		}
		cout << ans << endl;
	}	
	return 0;
}
