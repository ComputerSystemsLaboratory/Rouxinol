#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, m;
	string u[300];
	
	cin >> n;
	for(int i=0; i<n; ++i) cin >> u[i];
	cin >> m;
	
	bool open = false;
	for(int i=0; i<m; ++i){
		string t;	
		cin >> t;
		
		bool door=false;
		for(int j=0; j<n; ++j){
			if(t == u[j]){
				door=true;	
				break;
			}
		}
		
		if(!door) cout << "Unknown " << t <<endl;
		else if(door && open){
			cout << "Closed by " << t << endl;	
			open = false;
		}
		else if(door && !open){
			cout << "Opened by " << t << endl;	
			open = true;			
		}
	}
	
	return 0;
}