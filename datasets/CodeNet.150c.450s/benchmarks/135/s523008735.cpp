#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int w[10000000],h[1500];
int main(){
	int n,m;
	while(true){
	cin>>n>>m;
	if(n==0&&m==0)
		break;
	for(int i=0;i<n;i++)
		cin>>h[i];
	int wcount=0;
	for(int start=0;start<n;start++){
		int count=0;
		for(int len=start;len<n;len++){
			count+=h[len];
			w[wcount]=count;
			wcount++;
		}
	}
	sort(w,w+wcount);
	for(int i=0;i<m;i++)
		cin>>h[i];
	int key,ans=0;
	for(int start=0;start<m;start++){
	int count=0;
	for(int len=start;len<m;len++){
		count+=h[len];
		key=count;
	int left=0,right=wcount;
	int mid;
	while(true){
		if(left>=right)
			break;
		mid=(left+right)/2;
		if(w[mid]==key){
			ans++;
			int q=mid-1;
			while(true){
				if(q<0)
					break;
				if(w[q]==w[mid])
					ans++;
				else
					break;
				q--;
			}
			q=mid+1;
			while(true){
				if(q==wcount)
					break;
				if(w[q]==w[mid])
					ans++;
				else
					break;
				q++;
			}
			break;
		}
		if(key>w[mid])
			left=mid+1;
		if(key<w[mid])
			right=mid;
	}
	}
	}
	cout<<ans<<endl;
	}
	return 0;
}