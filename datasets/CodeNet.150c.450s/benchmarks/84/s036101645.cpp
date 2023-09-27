#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
vl A;
vl T;
ll solve(int bg, int en,vl &A){
	if(en-bg<=1)return 0;
	int cnt =(bg+en)/2;
	ll ans=0;
	ans += solve(bg,cnt,A);
	ans += solve(cnt,en,A);
	for(int i=bg;i<en;i++){
		T[i] = A[i];
	}
	ll lat=0;
	int p1 = bg;
	int p2 = cnt;
	for(int i=bg;i<en;i++){
		if(p1!=cnt &&( p2==en || T[p1] <= T[p2])){
			A[i] = T[p1];
			p1++;
			ans+= lat;
		}else{
			A[i] = T[p2];
			p2++;
			lat++;
		}
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	A.resize(n);
	T.resize(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	cout<<solve(0,n,A)<<endl;
	return 0;
}