#include <iostream>
using namespace std;

int main() {
	
	int a[10005];
	int n,num;
	cin>>n;
	for(int i=0;i<10005;i++){
		a[i]=0;
	}
	for(int i=0;i<n;i++){
		cin>>num;
		a[num]++;
	}
	int flag=0;
	for(int i=0;i<10005;i++){
		for(int j=0;j<a[i];j++){
			if(flag) cout<<" "; 
			cout<<i;
			flag=1;
		}
	}
	cout<<endl;
	
	return 0;
}