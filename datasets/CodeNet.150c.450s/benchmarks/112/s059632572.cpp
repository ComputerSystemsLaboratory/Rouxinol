#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	char dic[100000][2]={};
	char m[100000]={};
	int i=0,ii=0,j=0;
	int foo=1;
	int n,mn;
	unsigned char tem,memo;
	while(ii<5){
	cin>>n;
	if(n==0)break;
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			cin>>dic[i][j];
		}
	}
	//cout<<dic[1][0]<<dic[1][1]<<endl;
	cin>>mn;
	for(i=0;i<mn;i++){
		cin>>m[i];
	}
	for(i=0;i<mn;i++){
			for(j=0;j<n;j++){
		    
				if(m[i]==dic[j][0]){
					m[i]=dic[j][1];
					foo=1;
			}
			if(foo==1)break;
		}
			foo=0;
		}
	for(i=0;i<mn;i++){
		cout<<m[i];
	}
	cout<<endl;
	//foo=0;
	ii++;
	}
	return 0;
}