#include <iostream>
#include <vector>
using namespace std;


int main(void){

	vector<int> v;
	while(1){
		int temp;
		cin >> temp;
		if(temp == 0) break;
		v.push_back(temp);
	}
	for(int i = 0; i < v.size(); i++ ){
		cout << "Case " << i+1 << ": " << v[i] << endl;
	}
	return 0;
}