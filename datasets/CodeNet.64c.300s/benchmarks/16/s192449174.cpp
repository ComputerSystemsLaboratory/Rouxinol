#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int R[n];
	for(int i=0;i<n;i++){
		cin>>R[i];
	}
	
	int maxv;
	int minv=R[0];
	for(int j=1;j<n;j++){
		if(j==1) maxv=R[j]-minv;
		maxv=(max(maxv,R[j]-minv));
		minv=(min(minv,R[j]));
	}
	cout<<maxv<<endl;
	return 0;
}