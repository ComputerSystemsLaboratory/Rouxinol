#include<iostream>
#include<vector>
using namespace std;

int main(){
	int train;
	vector<int> dt;
	
	while(cin >>train){
		if(train){
			dt.push_back(train);
		} else{
			cout <<dt.back()<<endl;
			dt.pop_back();
		}
	}
	
	return 0;
}