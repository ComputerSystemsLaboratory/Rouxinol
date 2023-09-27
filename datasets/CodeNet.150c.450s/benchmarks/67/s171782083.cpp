#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n;
	int i = 1;
	int j = 1;
	vector<int> res;
	
	while(cin >> n && n != 0){
		int count = 0;
		while(j<n){
			int sum = 0;
			while(sum < n){
				sum += i;
				i++;
			}
			if(sum == n){
				count++;
			}
			j++;
			i = j;
		}
		i = 0;
		j = 1;
		res.push_back(count);
	}
	
	for(int i=0;i<res.size();i++){
		cout << res[i] << endl;
	}
	return 0;
}