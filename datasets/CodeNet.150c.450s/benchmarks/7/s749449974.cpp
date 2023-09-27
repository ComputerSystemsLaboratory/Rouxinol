#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(void){
	vector<int> height ;
	string s ;
	while(cin >> s){
		height.push_back(atoi(s.c_str()));
		
	}
	sort(height.begin(),height.end(),greater<int>());
	
	for(int i=0;i<3;i++){
		cout <<height[i]<<endl ;
	}
	
	return 0 ;
}