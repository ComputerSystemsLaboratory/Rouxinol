#include <iostream>
#include <vector>

using namespace std;

int main(){
	int num  = 1;
	vector<int> List;
	
	List.clear();
	while(num != 0){
		cin >> num;
		if(num != 0)	List.push_back(num);
	}
	
	for(int i = 0; i < List.size(); i++){
		cout << "Case " << i+1 << ": " << List[i] << endl;
	}
}