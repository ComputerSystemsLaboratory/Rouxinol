#include<cstdio>
#include<iostream>

using namespace std;

int main(){
	while(1){
		int n,m;
		char secret;
		char A[100]={0},B[100]={0};
		cin>>n;
		if(n==0)return 0;
		for(int i=0;i<n;i++){
			cin>>A[i]>>B[i];
		}
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>secret;
			int flag=0;
			for(int j=0;j<n;j++){
				if(secret==A[j]){
					printf("%c",B[j]);
					flag=1;
					break;
				}
			}
			if(flag==0)printf("%c",secret);
		}
		printf("\n");
	}
}