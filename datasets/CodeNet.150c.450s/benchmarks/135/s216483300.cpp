#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

void debug(const vector<int>& v){
	for(int i=0 ; i < v.size() ; i++ ){
		cout << v[i] << " ";
	}
	cout << endl;
}

// ツ青板療アツづ茎[i]ツつゥツづァs[j]ツづ個堕債和ツづーツ陛板つキ. (a[i] := s[i] + s[i+1] + ... + s[n-1])
int sum(const vector<int>& a, int i , int j){
	return a[i] - a[j+1];
}

int main(){
	int n, m;
	//while( cin >> n >> m , n || m ){
	while( scanf("%d %d", &n , &m ) , n || m ){
		// h,w : ツ禿シツ療?
		// H[i] := h[i] + h[i+1] + ... + h[n-1]
		// W[i] := w[i] + w[i+1] + ... + w[m-1]
		vector<int> h(n), w(m), H(n+1), W(m+1);
		
		int sum_h=0;
		for(int i=0 ; i < n ; i++ ){
			int e;
			scanf("%d", &e );
			h[i] = e;
			sum_h += h[i];
		}
		H[0] = sum_h;
		for(int i=0 ; i < h.size() ; i++ ){
			H[i+1] = H[i] - h[i] ;
		}
		
		int sum_w=0;
		for(int i=0 ; i < m ; i++ ){
			int e;
			scanf("%d", &e );
			w[i] = e;
			sum_w += w[i];
		}
		W[0] = sum_w;
		for(int i=0 ; i < w.size() ; i++ ){
			W[i+1] = W[i] - w[i] ;
		}
		
		// ツ連ツ堕アツつキツづゥ cnt ツ古つづ個堕債和ツづーツ仰?づ淞づゥ 
		for(int cnt=2 ; cnt <= n ; cnt++ ){
			// h[i] .. h[i+cnt-1] ツづ個堕債和
			for(int i=0 ; i <= n-cnt ; i++ ){
				h.push_back( sum( H , i , i+cnt-1 ) );
			}
		}
		// ツ連ツ堕アツつキツづゥ cnt ツ古つづ個堕債和ツづーツ仰?づ淞づゥ 
		for(int cnt=2 ; cnt <= m ; cnt++ ){
			// w[i] .. w[i+cnt-1] ツづ個堕債和
			for(int i=0 ; i <= m-cnt ; i++ ){
				w.push_back( sum( W , i , i+cnt-1 ) );
			}
		}
		// debug( h );
		// debug( w );
		
		sort( h.begin() , h.end() );
		sort( w.begin() , w.end() );
		
		int ans = 0;
		for(int i=0 ; i < h.size() ; i++ ){
			int k1 = h[i];
			int k2 = upper_bound(w.begin(),w.end(),k1) - lower_bound(w.begin(),w.end(),k1);
			ans += k2;
		}
		printf("%d\n", ans);
	}
}