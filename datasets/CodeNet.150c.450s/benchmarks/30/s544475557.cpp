#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
	vector<int> List;
	int count = 0;
	
    cin >> n;
	
	for(int i = 0; i < n; i++){
		int Value;
		cin >> Value;
		List.push_back(Value);
	}
	
	for(int i = 0; i < n; i++){
		int Min = i;
		for(int j = i; j < n; j++){
			if(List[j] < List[Min]){
				Min = j;
			}
		}
		if(i != Min){
			swap(List[i], List[Min]);
			count++;
		}
	}
	
	for(int i = 0; i < n; i++){
		if(i > 0)	cout << " ";
		cout << List[i];
	}
	cout << endl;
	
	cout << count << endl;
}