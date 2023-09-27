#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> x;
	while(1){
		int temp;
		cin>>temp;
		if (temp==0){
			break;
		}
		x.push_back(temp);
	}
	for (vector<int>::size_type i=0;i<x.size();i++){
		cout<<"Case "<<i+1<<": "<<x[i]<<endl;
	}
	return 0;
}