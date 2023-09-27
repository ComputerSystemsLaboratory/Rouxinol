#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

char mcxi[]={'m','c','x','i'};
int v[]={1000,100,10,1};

int toint(string x){
	int d=1;
	int sum=0;
	for(int i=0;i<x.size();i++){
		if(x[i]>='0' &&x[i]<='9'){
			d=x[i]-'0';
		}else{
			for(int j=0;j<4;j++){
				if(x[i]!=mcxi[j])continue;
				sum+=d*v[j];
				d=1;
				break;
			}
		}
	}
	return sum;

}
int main(void){
	int n,sum,cnt;
	string a,b;

	cin>>n;
	while(n--){
		cin>>a>>b;
		sum=toint(a)+toint(b);
		for(int i=0;i<4;i++){
			cnt=0;
			while(sum>=v[i]){
				sum-=v[i];
				cnt++;
			}
			if(cnt>1)cout<<cnt;
			if(cnt>0)cout<<mcxi[i];
		}
		cout<<endl;
	}
}