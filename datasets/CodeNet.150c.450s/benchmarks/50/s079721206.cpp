#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,x,p[6]={500,100,50,10,5,1},ans=0;
	while(1){
		ans=0;
		cin>>a;
		if(a==0)
		break;
		x=1000-a;
		for(int i=0;i<6;i++){
			while(1){
				if(x>=p[i]){
				x-=p[i];
				ans++;
				}else
				break;
			}
		}
		cout<<ans<<endl;
	}
return 0;
}