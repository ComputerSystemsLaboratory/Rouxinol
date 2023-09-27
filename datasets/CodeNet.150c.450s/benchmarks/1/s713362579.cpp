#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<algorithm>
#include<list>
#include<cmath>
#include<iomanip>
#include<queue>
#include<functional>
#include<climits>
#include<iterator>
#include<unordered_map>

using namespace std;

const double pi=4*atan(1.0);

int mod=1000000007;

int main() {
	int N;
	cin>>N;
	vector<int> arr(N);
	for(auto& val:arr)
		cin>>val;

	vector<int> dp(N);
	
	int ans=0;
	dp[0]=arr[0];
	for(int i=1;i<N;++i){
		if(arr[i]>dp[ans]){
			dp[++ans]=arr[i];
		}
		else{
			
			int min=0,max=ans;
			int mid;
			while(1){
				mid=(max-min)/2+min;

				if(dp[mid]>arr[i]){
					if(min==mid)break;
					max=mid;
				}
				else if(dp[mid]<arr[i]){
					if(min==mid){
						++mid;
						break;
					}
					min=mid;
				}
				else{
					break;
				}
			}

			dp[mid]=arr[i];

		}
	}

	cout<<ans+1<<endl;

	//system("pause");
	return 0;
}