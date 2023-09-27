#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

#define M 1111111
int sosu[M];

int main(){
	sosu[0]=sosu[1]=1;
	rep(i,M){
		if(sosu[i]==0){
			for(int j=i*2;j<M;j+=i){
				sosu[j]=1;
			}
		}
	}
		
	
	while(1){
		int a,d,n;
		cin>>a>>d>>n;
		
		if(a==0 && d==0 && n==0)break;
		
		int count = 0;
		while(1){
			if(sosu[a]==0)count++;
			if(count==n){
				printf("%d\n",a);
				break;
			}
			a+=d;
		}
	}
}