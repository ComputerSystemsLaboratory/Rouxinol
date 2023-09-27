#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	vector<int> v;

	for(int i=0;i<5;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}

	sort(v.rbegin(),v.rend());

	
	cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<endl;
	

	return 0;
} 