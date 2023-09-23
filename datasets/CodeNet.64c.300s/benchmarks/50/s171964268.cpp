#include <iostream>
using namespace std;
int n;
int cnt[102];
int count;
int main(){
	cin>>n;
	for(int i=0;i<n;++i)cin>>cnt[i];
	// 0-->n-1
	for(int i=0;i<n;++i){
		for(int j=n-1;j>i;j--){
			if(cnt[j]<cnt[j-1]){
				swap(cnt[j],cnt[j-1]);
				count++;
			}
		}
	}
	for(int i=0;i<n-1;++i){
		cout<<cnt[i]<<' ';
	}
	cout<<cnt[n-1]<<'\n';
	cout<<count<<'\n';
}