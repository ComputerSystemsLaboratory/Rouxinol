#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
bool akinai(int,int);
int main(){
	int n,i,ans;
	cin>>n;
	for(i=1;i<=n;i++){
		ans=akinai(n,i);
		if(ans==true){
			cout<<" "<<i;
		}
	}
	cout<<endl;
	return 0;
}

bool akinai(int n, int i){
	int count=0;
	int amari;
	while(1){
		if(count==0){
			amari=i%3;
		}
		if(amari==0 || i%10==3){
			return true;
		}
		if(amari!=0 && count==5){
			return false;
		}
		i/=10;
		count++;
	}
}