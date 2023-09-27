#include<iostream>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main(){
	int n;
	cin >> n;
	int cnt[10001] = {0};
	while(n--){
		int x;
		cin >> x;
		cnt[x]++;
	}
	bool first = true;
	rep(i,10001){
		rep(j,cnt[i]){
			if(first)	first = false;
			else		cout << " ";
			cout << i;
		}
	}
	cout << endl;
	return 0;
}