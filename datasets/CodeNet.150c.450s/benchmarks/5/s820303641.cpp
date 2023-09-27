#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> a;
	int n;
	cin>>n;
	int i;
	for (i=0;i<n;i++){
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	for (i=n-1;i>=0;i--){
		cout<<a[i];
		if (i!=0){
			cout<<" ";
		}
	}
	cout<<endl;
	return 0;
}