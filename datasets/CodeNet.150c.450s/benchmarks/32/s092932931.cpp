#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,n1,n2;
	cin >> m>>n1>>n2;
	while(m!=0||n1!=0||n2!=0){
	int p[m];
	for(int i = 0; i < m; i++){
		cin>>p[i];
	}
	int g = 0;
	for(int i = n1; i <= n2; i++){
		g = max(g,p[i-1]-p[i]);
	}
	for(int i = n2; i >= n1; i--){
		if(g==p[i-1]-p[i]){
			cout << i<<endl;
			break;
		}
	}
	cin >> m>>n1>>n2;
	}
	return 0;
}
