#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int n;
	int data[10];
	int a[11],b[11];
	int ai,bi;
	int k;
	int flag;
	cin>>n;
	while(n--){
		for(int i=0;i<10;i++) cin>>data[i];
		a[0]=b[0]=0;
		ai=bi=0;
		flag=0;
		for(k=0;k<10;k++){
			if(a[ai]<data[k]){
				a[ai+1]=data[k];
				ai++;
			}
			else if(b[bi]<data[k]){
				b[bi+1]=data[k];
				bi++;
			}
			if(data[k]<a[ai] && b[bi]>data[k])
				flag=1;
		}
		if(flag==1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}