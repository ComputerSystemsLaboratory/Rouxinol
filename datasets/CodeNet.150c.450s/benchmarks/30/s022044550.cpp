#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int>data(n);
	for(auto &a:data) cin >> a;
	int count = 0;
	for(int i = 0; i < n; i++){
		int mini = i;
		for(int j = i; j < n; j++){
			if(data[j] < data[mini]) mini = j;
		}
		if(i != mini){
			count++;
			swap(data[i],data[mini]);
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