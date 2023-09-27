#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> data(n);
	int count = 0;
	for(auto &a:data){
		cin >> a;
	}
	for(int i = 0; i < n; i++){
		for(int j = n - 1; j > i; j--){
			if(data[j] < data[j-1]){
				swap(data[j],data[j-1]);
				count++;
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(i!=0) cout << " ";
		cout << data[i];
	}
	cout << endl;
	cout << count << endl;
	return 0;
}