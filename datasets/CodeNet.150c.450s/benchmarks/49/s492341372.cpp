#include <bits/stdc++.h>
using namespace std;
int main(){
	
	cin.tie( 0 );
	ios::sync_with_stdio( false );
    
	while(true){
        	int n;
        	cin >> n;
        
        	if(n == 0){ break; }
        	int MAX = INT_MIN ,MIN = INT_MAX;
        	vector<int> vc(n);
        
        	for(int i=0; i<n; i++){
            		cin >> vc[i];
            		MAX = max(MAX, vc[i]);
            		MIN = min(MIN, vc[i]);
        	}
        	auto res = (accumulate(vc.begin(), vc.end(), 0)) - (MAX + MIN);
        	cout << res / (n-2) << endl;
    	}
    	return 0;
}