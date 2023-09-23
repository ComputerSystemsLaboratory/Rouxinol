#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n){
		n--;
		int y,m,d;
		cin>>y>>m>>d;
		int ans=0;
		{
			int a=1000/3;
			int b=y/3;
			int c=a-b;
			ans+=c*200;
			ans+=(1000-y-c-1)*195;
		}
		{
			if(y%3==0){
				ans+=(10-m)*20;
			}
			else{
				int a=10-m;
				int b=a/2;
				ans+=20*b+19*b+(a%2!=0)*19;
			}
		}
		{
			if(y%3==0||m%2!=0){
				ans+=(20-d);
			}
			else ans+=(19-d);
		}
		cout<<ans+1<<endl;
	}
}