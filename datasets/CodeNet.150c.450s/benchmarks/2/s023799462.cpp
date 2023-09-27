#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
#define vi vector<int>
#define vs vector<string>
const int inf=1e9+1;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009
#define pi 3.14159265358979323846

int main(){
	int n,i,j,temp;
	cin>>n;
	vi a(n);
	loop(i,0,n){
		cin>>a[i];
	}
	i=-1;
	int x=a[n-1];
	loop(j,0,n-1){
		if(a[j]<=x){
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[i+1];
	a[i+1]=a[n-1];
	a[n-1]=temp;
	loop(j,0,n){
		if(j==i+1){
			cout<<"["<<a[j]<<"] ";
		}else if(j!=n-1){
			cout<<a[j]<<" ";
		}else{
			cout<<a[j]<<endl;
		}
	}
}