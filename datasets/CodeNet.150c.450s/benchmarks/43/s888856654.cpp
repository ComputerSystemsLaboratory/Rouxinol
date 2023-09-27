#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <cstdio>
using namespace std;
int main(){
	int n,a[10000],b[10000],i,Acount=0,Bcount=0;
	while(cin>>n){
		if(n==0)break;
		for(i=0;i<n;i++){
			cin>>a[i]>>b[i];
			if(a[i]>b[i])Acount+=a[i]+b[i];
			else if(a[i]<b[i])Bcount+=a[i]+b[i];
			else {
				Acount+=a[i];
				Bcount+=b[i];
			}
		}
		cout<<Acount<<" "<<Bcount<<endl;
		Acount=0;
		Bcount=0;
	}
	return 0;
}