#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	int n,m,i,j;
	while(cin>>n &&n){
		string A,B;
		vector<string> a,b;
		for(i=0;i<n;i++){
			cin>>A;
			cin>>B;
			a.push_back(A);
			b.push_back(B);
		}
		cin>>m;
		string X;
		vector<string> x;
		for(i=0;i<m;i++){
			cin>>X;
			for(j=0;j<n;j++){
				if(X==a[j]){
				X=b[j];
				break;
			}
			}
			x.push_back(X);
		}
		for(i=0;i<m;i++){
		cout<<x[i];
		}
		cout << endl;
	}
return 0;
}