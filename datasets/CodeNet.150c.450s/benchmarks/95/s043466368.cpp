#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string a;
	while(cin>>n&&n!=0){
		int sum=0;
		int r=0,l=0;
		int f=0;
		for(int i=0;i<n;i++){
			cin>>a;
			if(a=="lu"){
				if(l==0) l++;
			}
			else if(a=="ru"){
				if(r==0) r++;
			}
			else if(a=="ld"&&l==1) l--;
			else if(a=="rd"&&r==1) r--;
			if(r==0&&l==0&&f==1){
				f=0;
				sum++;
			}
			else if(r==1&&l==1&&f==0){
				f=1;
				sum++;
				}
			}
			cout<<sum<<endl;
		}
		}
						