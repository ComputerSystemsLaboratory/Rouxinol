#include<iostream>

using namespace std;
int data[1010];
int main(){
	int n,a,b,c,x;
	while(cin>>n>>a>>b>>c>>x &&n){
		for(int i=0;i<n;i++)cin>>data[i];
		int now=0;
		int ans=0;
		int next=x;
		for(int i=1;i<=20000;i++){
			
			
			if(data[now]==next)now++;
			if(now==n)break;
			next=(a*next+b)%c;
			ans++;
		}
		if(ans<=10000)cout<<ans<<endl;
		else cout<<-1<<endl;
		
	}
	
}