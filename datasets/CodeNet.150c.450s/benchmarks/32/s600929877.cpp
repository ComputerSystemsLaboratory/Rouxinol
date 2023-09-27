#include <iostream>
#include <algorithm>
using namespace std;

int m,nmin,nmax,ans,gap;
int a[201];
int main(){
	while(1){
		cin >>m >>nmin >>nmax;
		if(!(m||nmin||nmax))break;
		for(int i=0;i<m;i++){
			cin >>a[i];
		}
		gap=0;
		for(int i=nmin;i<=nmax;i++){
			if(a[i-1]-a[i]>=gap){
				ans=i;
				gap=a[i-1]-a[i];
			}

		}
	//for(int i=0;i<m;i++){
	//	cout << a[i]<<" ";
	//}
		cout << ans<<endl;
	}
	
}