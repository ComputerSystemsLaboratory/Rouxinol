#include <bits/stdc++.h>
using namespace std;

int main(){
	int n , m;
	int t[50001]={0};
	for(int i=1;i<50001;++i){
		t[i]=1e+9;
	}
	cin >> n >> m;
	int* c = new int [m];
	for(int i=0;i<m;++i){
		cin >> c[i];
	}
	for(int i=0 ; i<m;++i){
		for(int j=c[i]; j<n+1 ;++j){
			t[j]=min(t[j] , t[j-c[i]]+1);
		}
	}
	cout << t[n] << endl;
	delete [] c;
	return 0;
}