#include <iostream>
#include <vector>
#include <algorithm>

#define LIM 2000000

using namespace std;

int main(){

	int n, m, h[2000], w[2000];
	
	while(cin>>n>>m, (n||m)){
		
		for(int i=0; i<n; ++i){
			cin>>h[i];
		}
		
		for(int i=0; i<m; ++i){
			cin>>w[i];
		}
		
		int res=0;
		vector<int> hlen, wlen;
		
		for(int p=0; p<n; ++p){
			
			int hsum=0;
			
			for(int q=p; q<n; ++q){
				
				hsum+=h[q];
				hlen.push_back(hsum);
			}
		}
		
		for(int r=0; r<m; ++r){
		
			int wsum=0;
			
			for(int s=r; s<m; ++s){
				
				wsum+=w[s];
				wlen.push_back(wsum);
			}
		}
		
		sort(hlen.begin(), hlen.end());
		sort(wlen.begin(), wlen.end());
		
		for(int i=0; i<hlen.size(); ++i){
			
			vector<int>::iterator it1 = lower_bound(wlen.begin(), wlen.end(), hlen[i]),
								  it2 = upper_bound(wlen.begin(), wlen.end(), hlen[i]);
			
			res += it2-it1;
		}
		
		cout << res << endl;
	}
	
	return 0;
}