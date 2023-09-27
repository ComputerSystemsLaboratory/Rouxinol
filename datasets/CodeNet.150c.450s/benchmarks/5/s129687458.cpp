#include <iostream>
#include <cstdio>

using namespace std;

int main(void){
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=n-1;i>=0;i--){
		cout<<a[i];
		if(i==0)
			break;
		cout<<" ";
	}
	cout<<endl;

  return 0;
}