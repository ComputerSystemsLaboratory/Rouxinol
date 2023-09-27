#include<bits/stdc++.h>
using namespace std;
int w[100001];
int n,k,v;
int cont(long long p){
    int t=k,i=0;
    long long tt=0;
    while (t--){
    	while (tt<=p){
    		  tt+=w[i++];
    		  if (i-1==n && tt<=p){
    		  	// if (t==0){
    		  	    return n;	
			//	 }
				// else return n+1;
			  }
			  if (tt>p) i--;
		}
		tt=0;
	}
	return i;
}
int main(){
	cin>>n>>k;
	long long l=20000,r=1,mid;
	for (int i=0; i<n; i++){
		cin>>w[i];
		r+=w[i];
		if (w[i]<l) l=w[i];
	}
	while (l<r){
		  mid=(l+r)/2;
		  v=cont(mid);
		  //if (cont(mid)==n){
		//  	  while (cont(mid)==n) mid--;
		 // 	  cout<<mid+1<<endl;
		//  	  break;
		//  }
		  if (v<n)
		     l=mid+1;
		  else
		     r=mid;
	}
	cout<<r<<endl;
	return 0;
}
