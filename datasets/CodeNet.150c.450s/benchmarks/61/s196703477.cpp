#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
	
	int n,a,b,c,x;
	
	while(cin>>n>>a>>b>>c>>x, n){
		
		vector<int> y(n);
		
		for(int i=0; i<n; ++i){
			cin>>y[i];
		}
		
		int res = -1;
		int cnt = 0;
		vector<int>::iterator it;
		
		for(int t=0; t<=10000; ++t){
			
			if(y[cnt] == x){
				cnt++;
			}
			
			if(cnt==n){
				res = t;
				break;
			}
			
			x = (a*x+b)%c;
		}
		
		cout << res << endl;
	}
	
	return 0;
}