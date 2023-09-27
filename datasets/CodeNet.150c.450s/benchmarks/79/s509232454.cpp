#include <bits/stdc++.h>
using namespace std;

int main(){
	int n , r;	
	while(cin>>n>>r,n|r){
		vector< pair<int,int> > v(r);
		vector<int> h(n);
		for(int i=0;i<n;++i){
			h[i]=n-i;
		}
		for(int i=0;i<r;++i){
			int p , c;
			cin >> p >> c;
			rotate(h.begin() , h.begin()+p-1 , h.begin()+p-1+c);
		}
		cout << h[0] << endl;
	}
	return 0;
}