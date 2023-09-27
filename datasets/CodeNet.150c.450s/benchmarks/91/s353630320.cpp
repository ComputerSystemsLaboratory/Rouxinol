#include<iostream>
#include<string>
#include <stdio.h>
#include <math.h>
#include <cctype>
#include<queue>
#include<stack>
#include<cstdio>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int ans=0;
		int d[999999+100]={};
		for(int i=2;i*i<=n;i++){
			if(d[i]==0){
				for(int j=2;j*i<=n;j++){
					d[j*i]++;
				}
			}
		}
		d[1]=1;
		for(int i=1;i<=n;i++){
					if(d[i]==0){
						ans++;
					}
							}
			cout<<ans<<endl;

		}
		
		return 0;
}