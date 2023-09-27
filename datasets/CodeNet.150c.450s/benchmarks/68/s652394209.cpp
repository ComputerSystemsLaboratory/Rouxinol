#include <iostream>
#include <algorithm>
using namespace std;

int m,nmin,nmax,ans,gap;
int a[1001];
int main(){
	while(1){
		cin >>m;
		if(m==0)break;
		for(int i=0;i<m;i++){
			cin >>a[i];
		}
		sort(a,a+(m));
		gap=1000001;
		for(int i=1;i<m;i++){
			if(a[i]-a[i-1]<=gap){
				gap=a[i]-a[i-1];
			}

		}
		cout << gap<<endl;
	}
	
}