#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
	long n, tmp;
	while(cin >> n, n){
		vector<long> polong;
		long min = 1000001;
		long res;
		for(long i=0;i<n;i++){
			cin >> tmp;
			polong.push_back(tmp);
		}
		sort(polong.begin(),polong.end(),greater<long>());

		for(long i=0;i<n-1;i++){
			if(polong[i] - polong[i+1] < min){
				min = polong[i] - polong[i+1];
			}
		}
		cout << min << endl;
	}
}