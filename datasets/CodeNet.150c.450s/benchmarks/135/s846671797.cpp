#include<iostream>
#include<vector>
#define M   1500000
using namespace std;
int main(void){
int n,m;
while(1){
cin>>n>>m;
if(n==0)break;
vector<int> h(n),w(m);
vector<int> hl(M,0),wl(M,0);
for(int i=0;i<n;i++){
	cin>>h[i];
}
for(int i=0;i<m;i++){
	cin>>w[i];
}
int sum=0;
for(int i=0;i<n;i++){
	 sum=0;
	for(int j=i;j<n;j++){
		sum+=h[j];
		hl[sum-1]++;
	}
}
for(int i=0;i<m;i++){
	 sum=0;
	for(int j=i;j<m;j++){
		sum+=w[j];
		wl[sum-1]++;
	}
}
int t=0;
for(int i=0;i<M;i++){
		t+=hl[i]*wl[i];
	
}
cout<<t<<endl;
}
	return 0;
}