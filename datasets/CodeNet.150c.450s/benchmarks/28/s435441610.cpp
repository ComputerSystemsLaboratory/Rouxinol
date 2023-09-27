#include<bits/stdc++.h>
#define maxn 100000+6
using namespace std;
int n,num,w[maxn];
int check(long long p){
	int k=0;
	for(int i=0;i<num;i++){
		long long sum=0;
		while(sum+w[k]<=p){
			sum+=w[k];
			k++;
			if(k==n)return n;
		} 
	}
	return k;
}
int binarySearch(int left,int right){
	while(right>left){
		int mid=(left+right)>>1;
		int num=check(mid);
		if(num==n)right=mid;
		else left=mid+1;
	}
	return right;
}
int main(){
	
	while(scanf("%d%d",&n,&num)==2){
		for(int i=0;i<n;i++){
			scanf("%d",&w[i]);
		}
//		sort(w,w+n);
		cout<<binarySearch(0,100000*10000)<<endl;
	}
	return 0;
} 
