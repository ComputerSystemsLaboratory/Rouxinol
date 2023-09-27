#include <iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n,p;
	while(1){
		cin>>n>>p;
		if(!n && !p)break;
		int person[n];
		rep(i,n)person[i]=0;
		int cup=p;
		int ans;
		int cnt=0;
		//cout<<"start"<<endl;
		//cout<<"cup="<<cup<<endl;
		while(1){
			if(cup!=0){
				cup--;
				person[cnt]++;
			}else{
				cup=person[cnt];
				person[cnt]=0;
			}
			if(cup==0){
				bool check=true;
				rep(i,n){
					if(i!=cnt){
						if(person[i]!=0){
							check=false;
							break;
						}
					}
				}
				if(check){
					ans=cnt;
					break;
				}
			}
			cnt=(cnt+1)%n;
			//rep(i,n)cout<<person[i]<<" ";
			//cout<<endl;
		//	cout<<"cnt="<<cnt<<endl;
		}
		//cout<<"end"<<endl;
		cout<<ans<<endl;
	}
	return 0;
}