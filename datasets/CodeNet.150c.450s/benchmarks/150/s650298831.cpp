#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
#define vi vector<int>
#define vs vector<string>
typedef pair<string,int> card;
#define mark first
#define kazu second
const int inf=1e9+1;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009
#define pi 3.14159265358979323846

int main(){
	int i,j,k,n;
	cin>>n;
	vi a(n),b(n);
	loop(i,0,n){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	cout<<a[0];
	loop(i,1,n){
		cout<<" "<<a[i];
	}
	cout<<"\n";
}