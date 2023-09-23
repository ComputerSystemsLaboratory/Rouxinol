#include<iostream>
#include<vector>
using namespace std;
int main(void){
int a,b,c;
while(1){
int ans=0;
cin>>a>>b>>c;
if(a==0)break;
for(int i=1;i<c/2+1;i++){
	int d=1,sum;
	while(1){
		d++;
		 sum=i*(100+a)/100+d*(100+a)/100;
		if(sum>=c)break;
	}
if(sum==c)ans=max(ans,i*(100+b)/100+d*(100+b)/100);
}
cout<<ans<<endl;
}
	return 0;
}
