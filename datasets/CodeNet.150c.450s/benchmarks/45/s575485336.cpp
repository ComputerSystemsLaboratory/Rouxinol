#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const long long int Mod=1e9+7;
int main(){
	long long int a  ,b ,c ,n ,i ,j ,m ,res=1;
	cin>>m>>n;
//	cout<<"\n";
	while(n){
		if(n%2){
			res=(res*m)%Mod;
		}
		m=(m*m)%Mod;
		n/=2;
	}
	cout<<res;
	cout<<"\n";
}
