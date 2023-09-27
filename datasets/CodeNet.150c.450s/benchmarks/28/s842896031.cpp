#include<stdio.h>
#include<queue>
#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
#include<math.h>
#include<set>
using namespace std;

int n,k,w[100005];
typedef long long int ll;
int check(ll p){
	int j=0;
	for(int i=0;i<k;i++){
		ll s=0;
		while(s+w[j]<=p){
			s+=w[j];
			j++;
			if(j==n)
				return 1;
		}
	}
	return 0;
}
ll ef(){
	ll i=0,j=100000*10000,m;
	while(j-i>1){
		m=(i+j)/2;
		if(check(m))j=m;
		else i=m;
	}
	return j;
}
int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++)
		scanf("%d",&w[i]);
	int ans=ef();
	cout<<ans<<endl;
}
