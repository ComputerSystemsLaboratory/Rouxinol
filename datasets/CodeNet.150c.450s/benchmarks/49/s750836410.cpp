#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n,a;
	vector<int>vec;
	int sum;
	while(true){
		cin>>n;vec.clear();
		if(n==0){break;}
		for(int i=0;i<n;i++){
			cin>>a;
			vec.push_back(a);
		}
		sort(vec.begin(),vec.end());
		sum=0;
		for(int i=0;i<vec.size();i++){
			sum+=vec[i];
		}
		cout<<(sum-vec[0]-vec[vec.size()-1])/(vec.size()-2)<<endl;
	}
}