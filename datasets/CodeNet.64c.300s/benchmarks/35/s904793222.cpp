#include <iostream>

using namespace std;
int dat[100][100];

int main(){
	int n, f, v, g;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>f>>v;
		for(int j=1;j<=v;j++){
			cin>>g;
			dat[f][g]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<n;j++){
			cout<<dat[i][j]<<" ";
		}
		cout<<dat[i][n]<<"\n";
	}
	return 0;
}