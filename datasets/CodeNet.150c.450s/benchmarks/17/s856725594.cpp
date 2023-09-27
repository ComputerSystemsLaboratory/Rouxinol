#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> vec(5, 0);
	int i;
	
	for(i = 0; i < vec.size(); i++)
		cin >> vec[i];
	sort(vec.begin(), vec.end());
	
	for(i = vec.size() - 1; i >= 0; i--){
		cout << vec[i];
		if(i != 0)
			cout << " ";
		else cout << endl;
	}
	
	return 0;
}