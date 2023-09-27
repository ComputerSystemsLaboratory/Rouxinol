#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n;
	string u[n];
	for(int i=0;i<n;i++){
		cin >> u[i];
	}
	cin >> m;
	string t[m];
	int l=0;
	for(int i=0;i<m;i++){
		cin >> t[i];
		for(int j=0;j<n;j++){
			if((t[i]==u[j]) && (l%2==0)){
				cout << "Opened by " << t[i];
				l++;
				break;
			}else if((t[i]==u[j]) && (l%2==1)){
				cout << "Closed by " << t[i];
				l++;
				break;
			}
			if(j==n-1){
				cout << "Unknown " << t[i];
				break;
			}
		}
		cout << endl;
	}
}
