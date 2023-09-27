#include <bits/stdc++.h>
using namespace std;
int main(){
	char data[4]={'m','c','x','i'};
	int n,num[4]={1000,100,10,1};
	cin>>n;
	while(n--){
		int sum=0;
		string s,ans="";
		for(int times=0;times<2;times++){
			cin>>s;
			for(int i=0;i<s.size();i++){
				for(int j=0;j<4;j++){
					if(s[i]==data[j]){
						if(i>0&&s[i-1]-'0'<10){
							sum+=num[j]*(s[i-1]-'0');
						}else{
							sum+=num[j];
						}
					}
				}
			}
		}
		int digit=1000;
		for(int i=0;i<4;i++){
			if(sum/digit>1){
				ans+=(char)((sum/digit)+'0');
				ans+=data[i];
				sum%=digit;
			}else if(sum/digit==1){
				ans+=data[i];
				sum%=digit;
			}
			digit/=10;
		}
		cout<<ans<<endl;
	}
}