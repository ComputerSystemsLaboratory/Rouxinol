#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){

	long long n,m,sum=0;
	cin>>n;
	vector<long long> vec;
	for(int i=0;i<n;++i){
		cin>>m;
		vec.push_back(m);
		sum+=m;
	}

	sort(vec.begin(),vec.end());
	long long max,min;
	max=vec[n-1];
	min=vec[0];

	cout<<min<<" "<<max<<" "<<sum<<endl;
	
	return 0;
}