#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){


	int n;
	while(cin>>n&&n!=0){
		vector<int> v;
		for(int i = 1; i <= n; i++){
			v.push_back(i);
		}
		int sum=1;
		int begin=0;
		int end=0;
		
		int cnt=0;
		while(1){
			if(end==n-1)
				break;
			else if(sum==n){
				cnt++;
			}
			if(sum<n){
				end++;
				sum+=v[end];
			}
			else if(sum>=n){
				sum-=v[begin];
				begin++;
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}