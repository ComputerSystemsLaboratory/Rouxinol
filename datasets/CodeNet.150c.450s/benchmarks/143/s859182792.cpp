#include<bits/stdc++.h>
using namespace std;
long long counter[100005];

int main(){
	int n;
	cin>>n;
	long long total=0;
	while(n--){
		int a;
		cin>>a;
		total+=a;
		counter[a]++;
	}
	int q;
	cin>>q;
	while(q--){
		int from,to;
		cin>>from>>to;
		total-=counter[from]*from;
		total+=counter[from]*to;
		counter[to]+=counter[from];
		counter[from] = 0;
		cout<<total<<'\n';
	}
}