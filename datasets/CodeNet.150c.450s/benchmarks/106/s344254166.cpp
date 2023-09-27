#include<iostream>
using namespace std;
int main(){
	int a,b,c,i,ans=0,yaku=0;
	cin>>a>>b>>c;
	for(i=a;i<=b;i++){
		yaku=c%i;
		if(yaku==0){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}