#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> vec;
	int n;
	int max = -1; 
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(max < a){
			vec.push_back(a);
			max = a;
			
		}else{
			vector<int>::iterator itr = lower_bound(vec.begin(),vec.end(),a);
			int idx = vec.size()-1;
			*itr = a;
			max = vec[idx];
		}
	}
	cout<<vec.size()<<endl;
	return 0;
}