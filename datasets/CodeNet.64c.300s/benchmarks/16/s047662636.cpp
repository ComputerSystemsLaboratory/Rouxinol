#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int *r;
	r=new int [n];
	if (r==NULL) {
		cout<<"Error!"<<endl;
		return -1;
	}
	int i,j;
	for (i=0;i<n;i++){
		cin>>r[i];
	}
	int max=r[1]-r[0];
	for (j=n-1;j>=0;j--){
		if (r[j]<=max) continue;
		for (i=j-1;i>=0;i--){
			if (r[j]-r[i]>max) max=r[j]-r[i];
		}
	}
	cout<<max<<endl;
	return 0;
}