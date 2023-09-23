#include<iostream>
using namespace std;
int main(){
	int n,s1=0,s2=0,a,b;
	while(1){s1=0;s2=0;
	cin>>n;
	if(n==0)break;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a>b)s1+=a+b;
		else if(a<b)s2+=a+b;
		else{
			s1+=a;
			s2+=b;
		}
	}
	cout<<s1<<" "<<s2<<'\n';}
	return 0;
}