#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> train;
	int num;
	while(cin>>num){
		if(num != 0){
			train.push_back(num);
		}else if(num == 0){
			cout<<train[train.size()-1]<<endl;
			train.pop_back();
		}
	}
	return 0;
}