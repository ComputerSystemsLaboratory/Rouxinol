#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int Y,M,D,ans=1;
		cin>>Y>>M>>D;
		int cny=Y,cnm=M;
		if(cny%3!=0){
			if(cnm%2!=0){
				ans+=20-D;
				ans+=(10-cnm)/2*20;
				ans+=((10-cnm)/2+1)*19;
			}
			else{
				ans+=19-D;
				ans+=(10-cnm)/2*20;
				ans+=(10-cnm)/2*19;
			}
		}
		else{
			ans+=20-D;
			ans+=(10-cnm)*20;	
		}
		cny++;
		while(1000-cny>0){
			if(cny%3==0){
				ans+=200;
			}
			else{
				ans+=195;
			}
			cny++;
		}
	cout<<ans<<endl;
	}
	return 0;
}