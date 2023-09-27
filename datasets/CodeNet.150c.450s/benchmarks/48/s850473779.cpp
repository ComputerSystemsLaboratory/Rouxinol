#include<iostream>
using namespace std;

int main()
{
	int e;
	while(cin>>e && e!=0){
		int ans=e;
		for(int z=0;z<e;z++){
			if(z*z*z>e) break;
			for(int y=0;y<e;y++){
				if(z*z*z+y*y>e) break;
				ans=min(ans,z+y+(e-z*z*z-y*y));
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}