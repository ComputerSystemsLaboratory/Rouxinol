#include "bits/stdc++.h"
using namespace std;

int main(){
	vector<int> a(5);
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
	sort(a.begin(),a.end());
	
	cout<<a[4]<<" "<<a[3]<<" "<<a[2]<<" "<<a[1]<<" "<<a[0]<<endl;
	return 0;
}