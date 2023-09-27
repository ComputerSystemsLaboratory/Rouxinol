#include<iostream>
using namespace std;
int main(){
	int a,d,n;
	while(cin>>a>>d>>n,n){
		int cnt=0,f;
		while(1){
			f=0;
			for(int i=2;i*i<=a;i++){
				if(a%i==0){
					f=1;
					break;
				}
			}
			if(f==0 && a!=1){
				cnt++;
			}
			if(cnt==n){
				cout<<a<<endl;;
				break;
			}
			a+=d;
		}
	}
	return 0;
}