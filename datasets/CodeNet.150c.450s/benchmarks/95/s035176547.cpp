#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n,n){
		bool l=false,r=false;
		int ans=0;
		bool bf=false;
		
		for(int i=0;i<n;i++){
			string sa;
			cin>>sa;
			if(sa=="lu"){l=true;}
			else if(sa=="ru")r=true;
			else if(sa=="ld")l=false;
			else if(sa=="rd")r=false;
			
			if(l==r&&r!=bf){
				ans++;
				bf=l;
				}
			
			}
			cout<<ans<<endl;
		}
		return 0;
	}