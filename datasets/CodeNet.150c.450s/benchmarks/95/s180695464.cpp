#include <iostream>
#include <string>
using namespace std;

int main(){
	while(true){
		int n;
		cin>>n;
		if(n==0) return 0;
		int a[105] = {0};
		for(int i = 0; i < n; i++){
			string s;
		 	cin >>s;
		 	if(s=="lu") a[i]=0;
		 	if(s=="ru") a[i]=1;
		 	if(s=="ld") a[i]=2;
		 	if(s=="rd") a[i]=3;
  		}
  		int ans = 0;
  		if(n==1){
  			cout<<"0"<<endl;
  			goto e;
  		}
  		for(int i = 0; i < n-1;i++){
  			if(a[i] < 2){
  				if(a[i+1]!=a[i]&&a[i+1]<2) ans++;
  			}
  			else{
  				if(a[i+1]!=a[i]&&a[i+1]>=2) ans++;
  			}
  		}
  		cout<<ans<<endl;
  		e:;
	}
	return 0;
}
