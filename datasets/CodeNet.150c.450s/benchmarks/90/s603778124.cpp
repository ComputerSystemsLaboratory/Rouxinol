#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> Vec(100);
	int n;
	while(cin>>n){
		Vec[n]++;
	}
	int max_r = 0, ans=0;
	for(int i=0;i<Vec.size();i++){
		max_r = max( max_r, Vec[i]);
	}
	for(int i=0;i<Vec.size();i++){
		if(max_r == Vec[i]){
			cout<<i<<endl;
		}
	}
	
	
	return 0;
}