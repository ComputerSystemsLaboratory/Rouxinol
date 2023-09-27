#include <iostream>
using namespace std;

int main() {
	int a[4],b[4];
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
		cin>>b[0]>>b[1]>>b[2]>>b[3];
		int k=0,n=0;
		for (int kk=0;kk<=3;kk++){
			if(a[kk]==b[kk]){
				k=k+1;
			}
		}
		for(int l=0;l<=3;l++){
			for(int m=0;m<=3;m++){
				if(a[l]==b[m]){
					n=n+1;
				}
		}}
		cout<<k<<" "<<n-k<<endl;
	}
	return 0;
}