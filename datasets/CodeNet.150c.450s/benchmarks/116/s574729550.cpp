#include <iostream>
using namespace std;
int num[100000];
int main() {
	while(true){
	int n,k;
	cin >> n >> k;
	
	if(n==0 && k==0)
		break;
	for(int i=0;i<n;i++){
		cin >> num[i];
	}
	int now=0,maxer=0;
	for(int i=0;i<k;i++){
		now+=num[i];
	}
	maxer=now;
	for(int i=k;i<n;i++){
		now+=num[i]-num[i-k];
		maxer=max(maxer,now);
	}
	cout << maxer << endl;
	}
	return 0;
}