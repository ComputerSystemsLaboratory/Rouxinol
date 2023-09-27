#include<bits/stdc++.h>
using namespace std;
int n;
int f[50];
int fib(int k){
	 if (f[k]!=-1)
	    return f[k];
     if (k==0 || k==1) return 1;
	 f[k]=fib(k-1)+fib(k-2);
	 return f[k];	 
}
int main(){
	cin>>n;
	memset(f,-1,sizeof(f));
	cout<<fib(n)<<endl;
	return 0;
}
