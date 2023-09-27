#include<bits/stdc++.h>
#define loop(i,a,b) for(i=a;i<b;i++)
using namespace std;


 
int main(){
	int n,k,i,j;
	cin>>n>>k;
	int m=0,sum=0;
	vector<int> w(n);
	loop(i,0,n){
		cin>>w[i];
		m=max(m,w[i]);
		sum+=w[i];
	}
	int left=m,right=sum,cnt;
	int p=(left+right)/2;
	while(left+1<right){
		cnt=1;
		sum=0;
		loop(i,0,n){
			sum+=w[i];
			if(sum>p){
				cnt++;
				sum=w[i];
				if(cnt>k){
					left=p;
					break;
				}
			}
		}
		if(cnt<=k){
			right=p;
		}
		p=(left+right)/2;
	}
	cnt=1;sum=0;
	loop(i,0,n){
		sum+=w[i];
		if(sum>p){
			cnt++;
			sum=w[i];
		}
	}
	if(cnt<=k){
		cout<<p<<endl;
	}else{
		cout<<p+1<<endl;
	}
}