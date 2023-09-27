#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
	vector<int> mt;
	for(int i=0;i<10;i++){
		int tmp;
		cin>>tmp;
		mt.push_back(tmp);
	}
	sort(mt.begin(),mt.end());
	for(int i=9;i>=7;i--){
		cout<<mt[i]<<endl;
	}
	return 0;
}