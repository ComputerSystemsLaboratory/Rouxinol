#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
	int main(){
		int a,b;
		while(cin>>a>>b){
		int ans=a+b;int c=1;
		while(true){
			if(ans/10>=1){
				ans=ans/10;
				c++;
			}
			else if(ans/10==0)break;
		}
		//if(ans==0)cout<<0<<endl;
		 cout<<c<<endl;
		}
	return 0;
	}