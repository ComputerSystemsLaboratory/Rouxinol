#include <bits/stdc++.h>
using namespace std;

int main(void){
int n,r;
int p,c;
while(true){
cin>>n>>r;
if(n==0&&r==0)return 0;
vector<int> ca(n);
vector<int> t(n,0);
vector<int> t2(n,0);
for(int i=0;i<n;i++)ca[i]=n-i;
for(int i=0;i<r;i++){
	cin>>p>>c;
	for(int j=0;j<c;j++){
		t[p-1+j]=ca[p-1+j];
	}
	for(int k=0;k<p-1;k++){
		t2[c+k]=ca[k];
	}
	for(int k=0;k<p-1;k++){
		ca[c+k]=t2[c+k];	
	}
	for(int j=0;j<c;j++){
		ca[j]=t[p-1+j];
	}
}
cout<<ca[0]<<endl;
}
return 0;
}

