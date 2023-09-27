#include <iostream>
using namespace std;

int n,k;

bool loadable(int* w, long long int P){
	int cnt_trucks=1;
	long long int load = 0;
	bool is_loadable = true;
	
	for(int i=0; i<n; i++){
		if(w[i] > P){
			is_loadable = false;
			break;
		}
		if(load + w[i] <= P){
			load += w[i];
		}else if(load + w[i] > P){
			load = w[i];
			cnt_trucks+=1;
		}
		if(cnt_trucks > k){
			is_loadable = false;
			break;
		}
	}
	return is_loadable;

}

int main(){
	
	cin >> n >> k;

	int w[n];

	for(int i=0; i<n; i++)
		cin >> w[i];
	
	long long int right = 100000 * 10000;
	long long int left = 0;

	while(right - left > 1){
		long long int center = (left + right) / 2;
		bool is_loadable = loadable(w, center);
		if(is_loadable)
			right = center;
		else
			left = center; 
	}
		
	if(loadable(w, right)){
		cout << right << endl;
	}else{
		cout << left << endl;
	}

	return 0;

}