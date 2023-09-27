#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	string u[n];
	
	for(int i=0;i<n;i++){
		cin >> u[i];
	}
	
	int m;
	
	bool open=false;
	
	cin >> m;
	
	for(int i=0;i<m;i++){
		string t;
		cin >> t;
		
		for(int j=0;j<=n;j++){
			if(j==n){
				cout << "Unknown " << t << endl;
			}
			if(u[j]==t){
				if(open==true){
					cout << "Closed by " << t << endl;
					open=false;
				}else{
					cout << "Opened by " << t << endl;
					open = true;
				}
				break;
			}
		}
	}
					
	return 0;
}
