#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n+1];
	for(int i=n;i>0;i--){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cout<<a[i];
			if(n<=i){break;}
		cout<<" ";
	}
cout<<endl;
	return 0;
}