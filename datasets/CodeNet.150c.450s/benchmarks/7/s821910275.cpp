#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> top(3);
	int height;
	while(cin >> height){
		for(vector<int>::iterator itr = top.begin(); itr != top.end(); ++itr){
			if(height > *itr){
				top.insert(itr, height);
				top.pop_back();
				break;
			}
		}
	}
	for(vector<int>::iterator itr = top.begin(); itr != top.end(); ++itr){
		cout << *itr << endl;
	}
	return 0;
}