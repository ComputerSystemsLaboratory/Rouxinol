#include<iostream>
using namespace std;
bool is_sosu(int a){
	if(a==1)return false;
	for(int i=2;i*i<=a;i++){
		if(a%i==0)return false;
	}
	return true;
}

int main(){
	int a,d,n;
	while(cin>>a>>d>>n,a+d+n!=0){
		int cnt=0,now=a;
		while(true){
			
			if(is_sosu(now))cnt++;
			if(cnt==n)break;
			now+=d;
		}
		cout<<now<<endl;
	}
	return 0;
	
}