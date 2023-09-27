#include<iostream>
#include<vector>
using namespace std;

int main(void){
	int n;
	int x[101];
	for(int i=0; i<101; i++)
		x[i] = 0;

	while(cin>>n){
		x[n]++;
	}

	vector<int> res;
	int max = 0;

	for(int i=1; i<101; i++){
		if(x[i] > max){
			max = x[i];
			res.clear();
			res.push_back(i);
		}else if(x[i] == max){
			res.push_back(i);
		}
	}

	for(int i=0; i<res.size(); i++){
		cout << res[i] << endl;
	}

	return 0;
}