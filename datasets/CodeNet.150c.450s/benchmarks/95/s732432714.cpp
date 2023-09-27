#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	while(cin>>n &&n){
		int ans=0;
		int l=0,r=0;
		for(int i=0;i<n;i++){
			string str;
			cin>>str;
			if(str[0]=='l'){
				if(l==1)l=0;
				else if(r==1){
					ans++;
					r=l=0;
				}
				else l=1;
			}
			else {
				if(r==1)r=0;
				else if(l==1){
					ans++;
					r=l=0;
				}
				else r=1;
			}
		}
		cout<<ans<<endl;
	}
}