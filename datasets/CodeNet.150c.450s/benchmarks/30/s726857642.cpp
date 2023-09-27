#include <iostream>
using namespace std;
int n;
int cnt[102];
int count;
int main(){
	cin>>n;
	for(int i=0;i<n;++i)cin>>cnt[i];
	for(int i=0;i<n-1;++i){
		int min_idx=i;
		for(int j=i+1;j<n;++j){
			if(cnt[j]<cnt[min_idx])
				min_idx=j;
		}
		if(min_idx==i)
			continue;
		swap(cnt[i],cnt[min_idx]);
		count++;
	}
	for(int i=0;i<n-1;++i)
		cout<<cnt[i]<<' ';
	cout<<cnt[n-1]<<'\n';
	cout<<count<<'\n';
}