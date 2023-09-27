#include<iostream>
#include<algorithm>
using namespace std;
int n,num[600001];
int s[600001];
int tot=0;
void hb(int s1,int e1,int s2,int e2){
	int w=s1,t=s1;
	while(s1<=e1&&s2<=e2){
		if(num[s1]<num[s2]) s[w++]=num[s1++];
		else s[w++]=num[s2++];
		tot++;
	}
	if(s1<=e1){
		for(s1;s1<=e1;s1++){
			s[w++]=num[s1];
			tot++;
		}
	}
	else{
		for(s2;s2<=e2;s2++){
			s[w++]=num[s2];
			tot++;
		}
	}
	for(int i=t;i<=e2;i++){
		num[i]=s[i];
		s[i]=0;
	}
}
void gb(int l,int r){
	if(l==r) return;
	int mid=(l+r)/2;
	gb(l,mid);
	gb(mid+1,r);
	hb(l,mid,mid+1,r);
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>num[i];
	gb(0,n-1);
	for(int i=0;i<n-1;i++) cout<<num[i]<<" ";
	cout<<num[n-1]<<"\n";
	cout<<tot<<"\n";
	return 0;
}