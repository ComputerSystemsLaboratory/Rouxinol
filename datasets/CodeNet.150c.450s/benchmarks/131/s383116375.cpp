#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int a[33]={0},l;
	while(cin>>a[0]>>l){
		if(a[0]==0&&l==0) break;
		for(int i=1;i<=20;i++){
			for(int j=1;j<=l;j++){
				int x=a[i-1]/pow(10,j-1);
				a[20+j]=x%10;
				a[26+j]=0;
			}
			for(int j=1;j<=l;j++){
				for(int k=1;k<=l;k++){
					a[26+j]=max(a[26+j],a[20+k]);
				}
				for(int k=1;k<=l;k++){
					if(a[26+j]==a[20+k]){
						a[20+k]=0;
						break;
					}
				}
			}
			for(int j=l;j>=1;j--){
				a[i]=a[i]-a[26+j]*pow(10,j-1)+a[27+l-j]*pow(10,j-1);
			}
			for(int j=0;j<i;j++){
				if(a[j]==a[i]){
					cout<<j<<" "<<a[i]<<" "<<i-j<<endl;
					goto end;
				}
			}
		}
		end:;
		for(int i=0;i<33;i++){
			a[i]=0;
		}
	}
    return 0;
}