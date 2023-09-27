#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a,b;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			int temp;
			cin>>temp;
			a.push_back(temp);
		}
	}
	for (int i=0;i<m;i++){
		int temp;
		cin>>temp;
		b.push_back(temp);
	}
	for (int i=0;i<n;i++){
		int c=0;
		for (int j=0;j<m;j++){
			c+=a[m*i+j]*b[j];
		}
		cout<<c<<endl;
	}
	return 0;
}