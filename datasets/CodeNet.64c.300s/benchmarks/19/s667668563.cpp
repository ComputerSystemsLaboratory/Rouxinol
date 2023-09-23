#include <iostream>
using namespace std;

int main(){
	int n,a[5000];
	while(cin>>n){
		if(n==0)break;
		int c=0,k=-100000;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			c=0;
			for(int j=i;j<n;j++){
				c+=a[j];
				if(k<c)k=c;
			}
		}
		cout<<k<<endl;
	}
	return 0;
}
