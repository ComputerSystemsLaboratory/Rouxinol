#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>arr(n);
	for(int i=0; i<n; i++)
	 cin>>arr[i];
	int last=arr[0];
	for(int i=k; i<n; i++){
		if(arr[i]>last){
			last=arr[i-k+1];
			cout<<"Yes\n";
		}
		else
		{
			cout<<"No\n";
			last=arr[i-k+1];
		}
	}
	return 0;
}