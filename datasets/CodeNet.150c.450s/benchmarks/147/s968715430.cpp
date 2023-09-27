#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define pii pair<int,int>
#define fi first
#define se second
#define mex 1000005
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//vector<int> adj[mex];
//a+b=a^b+2*(a&b)

// FIRST THINK, THEN CODE
// DO NOT JUMP BETWEEN PROBLEMS

int main(){
	fast
	
	
	int a[10005];
	memset(a,0,sizeof(a));
	for(int i=1;i<100;i++){
		for(int j=1;j<100;j++){
			for(int k=1;k<100;k++){
				int y=i*i+j*j+k*k+i*j+i*k+j*k;
				if(y<=10000)
				 a[y]+=1;
			 }
		 }
	 }
	 int n;
	 cin>>n;
	 for(int i=1;i<=n;i++)
	  cout<<a[i]<<endl;
}
