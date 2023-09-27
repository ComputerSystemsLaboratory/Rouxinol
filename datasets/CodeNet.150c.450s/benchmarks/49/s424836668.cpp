#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int n;
	while(cin>>n,n){
		vector<int> v(n);
		rep(i,n) cin>>v[i];
		sort(v.begin(),v.end());
		int sum=0;
		rep(i,n-2){
			sum+=v[i+1];
		}
		sum/=n-2;
		cout<<sum<<endl;
	}
	return 0;

}