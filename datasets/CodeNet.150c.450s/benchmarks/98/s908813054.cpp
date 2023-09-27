#include <iostream>
#include <algorithm>
using namespace std;
int n,m,tt,ht,tw,hw,s;
int main(){
	while(cin>>n>>m){
		if(n==0&&m==0) break;
		int t[n],h[m];
		tt=0;
		ht=0;
		s=201;
		for(int i=0;i<n;i++){
			cin>>t[i];
			tt=tt+t[i];
		}
		for(int i=0;i<m;i++){
			cin>>h[i];
			ht=ht+h[i];
		}
		if((tt-ht)%2==0){
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(t[i]-(tt-ht)/2==h[j]){
						s=min(s,t[i]+h[j]);
						if(s==t[i]+h[j]){
							tw=t[i];
							hw=h[j];
						}
					}
				}
			}
			if(s==201){
				cout<<-1<<endl;
			} else{
				cout<<tw<<" "<<hw<<endl;
			}
		} else{
			cout<<-1<<endl;
		}
	}
    return 0;
}