#include<iostream>
#include<math.h>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m){
		if(n==0 && m==0)break;
		int ta[110]={},ha[110]={},t=0,h=0,s,f=0;
		for(int i=0;i<n;i++){
			cin>>ta[i];
			t+=ta[i];
		}
		for(int i=0;i<m;i++){
			cin>>ha[i];
			h+=ha[i];
		}
		sort(ta,ta+(n-1));
		sort(ha,ha+(m-1));
		s=max(t,h)-min(t,h);
		if(s%2!=0){
			cout<<-1<<endl;
		}
		else{
			s=s/2;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if((t>=h && ta[i]-ha[j]==s) || (t<=h && ha[j]-ta[i]==s)){
						cout<<ta[i]<<" "<<ha[j]<<endl;
						f=1;
						j=m+1;
						i=n+1;
					}
				}
			}
			if(f==0){
				cout<<-1<<endl;
			}
		}
	}
	return 0;
}