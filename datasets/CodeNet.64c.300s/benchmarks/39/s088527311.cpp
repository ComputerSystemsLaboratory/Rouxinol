#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	int i,j,k,l;
	int cnt;
	while(1){
		cin>>n;
		if(cin.eof())	break;
		cnt=0;
		for(i=0;i<=9;i++){
			for(j=0;j<=9;j++){
				for(k=0;k<=9;k++){
					for(l=0;l<=9;l++){
						if(n==i+j+k+l)	cnt++;
					}
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
