#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector<int> A;
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++) {
			cin>>a;
			A.push_back(a);
		}
	make_heap(A.begin(),A.end());
	for(int i=0;i<n;i++) {
			cout<<" "<<A[i];
		}
		cout<<endl;
	return 0;
}
