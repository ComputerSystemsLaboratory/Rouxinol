#include<iostream>
using namespace std;
int main(){
	int a,b,c,i,ans,sum=0;
	cin>>a>>b>>c;
	for(i=a;i<=b;i++){
		ans=c/i*i;
			if(ans==c){
				sum++;
			}
	}
	cout<<sum<<endl;
	return 0;
}