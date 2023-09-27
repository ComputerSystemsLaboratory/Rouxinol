#include <iostream>

using namespace std;

#define N 86410

int max(int a,int b){
	if(a>=b)return a;
	else return b;
}

int changeTime(int h,int m,int s){
	return 3600*h+60*m+s;
}

int main(){

	int n;

	int data[N];
	
	while(cin>>n){
		if(n==0)break;

		int h,m,s;
		char tmp;
		int ans=0;
		for(int i=0;i<N;i++)data[i]=0;
		for(int i=0;i<n;i++){
			cin>>h>>tmp>>m>>tmp>>s;

			data[changeTime(h,m,s)]++;

			cin>>h>>tmp>>m>>tmp>>s;
			data[changeTime(h,m,s)]--;
		}

		for(int i=1;i<N;i++){
			data[i] += data[i-1];
			ans = max(data[i],ans);
		}

		cout<<ans<<endl;
	}

	return 0;
}