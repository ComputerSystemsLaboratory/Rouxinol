#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, t=0;
	cin >> n;
	string a[n];
	for (int i=0;i<n;i++) {
		cin >> a[i];
	}
	cin >> m;
	string b[m];
	for (int i=0;i<m;i++){
		cin >> b[i];
		for(int j=0;j<n;j++){
			if(a[j]==b[i]){
				if(t%2==0){
					cout << "Opened by " << a[j] << endl;
					t++;
					break;
				}else if(t%2==1){
					cout << "Closed by " << a[j] << endl;
					t++;
					break;
				}
			}else if(j==n-1){
				cout << "Unknown " << b[i] << endl;
				break;
			}
		}
	}
}
