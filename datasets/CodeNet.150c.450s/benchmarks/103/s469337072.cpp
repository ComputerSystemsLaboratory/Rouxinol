#include<bits/stdc++.h>
using namespace std;
void func(int nn,int mm);
int n,s;
int box[10];
int sum,cnt;
int main(void){
	int i;
	
	for(i=0;i<=9;i++)	box[i]=i;
	while(1){
		cin>>n>>s;
		if(n==0&&s==0)	break;
		sum=0;
		cnt=0;
		func(0,0);
		cout<<cnt<<endl;
	}
	return 0;
}
void func(int nn,int mm){
	int i;
	if(mm==n){
		if(sum==s)	cnt++;
	}
	else{
		if(nn<=9){
			sum+=box[nn];
			func(nn+1,mm+1);
			sum-=box[nn];
			func(nn+1,mm);
		}
	}
}
	
