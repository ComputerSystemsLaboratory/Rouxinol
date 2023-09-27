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
	
	bool Flag = true;
	
	while(Flag){
		Flag = false;
		for(int j = n - 1; j > 0; j--){
			if(List[j] < List[j-1]){
				int Temp;
				Temp = List[j];
				List[j] = List[j-1];
				List[j-1] = Temp;
				Flag = true;
				count++;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		if(i > 0)	cout << " ";
		cout << List[i];
	}
	cout << endl;
	
	cout << count << endl;
}