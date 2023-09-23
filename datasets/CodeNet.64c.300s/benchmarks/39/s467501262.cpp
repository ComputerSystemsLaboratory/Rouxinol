#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
typedef long long int ll;


using namespace std;

int main(){
	while(1){
		int n;
		ll sum=0;
		if( !(cin>>n) )break;
		for(int i=0;i<=9;i++){
			for(int j=0;j<=9;j++){
				for(int k=0;k<=9;k++){
					for(int l=0;l<=9;l++){
						if( i+j+k+l==n )sum++;
					}
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}