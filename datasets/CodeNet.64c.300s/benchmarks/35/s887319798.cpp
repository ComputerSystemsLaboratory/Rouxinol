#include <iostream>
using namespace std;
int main(){
	int a[100][100];
	int n,u,k,v;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	for(int j=0;j<n;j++){
		cin>>u>>k;
		for(int i=0;i<k;i++){
			cin >>v;
			a[u-1][v-1]=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j];
			if(j!=n-1) cout << " ";
		}
		cout<<endl;
	}
	return 0;
}