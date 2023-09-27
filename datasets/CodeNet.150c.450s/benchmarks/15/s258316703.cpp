#include<iostream>
using namespace std;

int linerSearch(int n, int s[], int t){
	s[n]=t;
	int i=0;
	while(s[i]!=t){
		i++;
	}
	if(i==n) return 0;
	return 1;
}

int main(){
	int n,q,s[10000],t,ans=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s[i];
	}
	cin >> q;
	for(int i=0;i<q;i++){
		cin >> t;
		ans+=linerSearch(n,s,t);
	}
	cout << ans << endl;
	return 0;
}

