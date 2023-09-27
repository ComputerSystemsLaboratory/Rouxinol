#include<iostream>
#include<vector>
#include<algorithm>
#define  M 1e6
using namespace std;
typedef long long int ll;
vector<ll> x,y;
ll f(int n){
	return n*(n+1)*(n+2)/6;
}
void make(void){
	int i=1;
while(f(i)<M){
x.push_back(f(i));
if(f(i)%2==1){
	y.push_back(f(i));
}
	i++;
}
}
int main(void){
	make();
vector<ll> num(M,6),num2(M,1000000);
for(ll i=0;i<x.size();i++){
num[x[i]]=1;
}
for(ll i=0;i<y.size();i++){
	num2[y[i]]=1;
}
for(ll i=0;i<x.size();i++){
	for(ll j=x[i];j<M;j++){
		num[j]=min(num[j],num[j-x[i]]+1);
	}
}
for(ll i=0;i<y.size();i++){
	for(ll j=y[i];j<M;j++){
		num2[j]=min(num2[j],num2[j-y[i]]+1);
	}
}
int n;

while(1){
	cin>>n;
	if(n==0)break;

	cout<<num[n]<<" "<<num2[n]<<endl;
}
return 0;
}