#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, x;
	vector<int> a;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}

	for(int i=a.size()-1;i>=0;i--){
		if(i != a.size()-1) cout<<" ";
		cout<<a[i];
	}
	cout<<endl;

	return 0;
}