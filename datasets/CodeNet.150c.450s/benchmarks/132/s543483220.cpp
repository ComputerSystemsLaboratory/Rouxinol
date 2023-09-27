#include <iostream>
#include <string>
#include <queue>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){

	int n, p;
	while(cin >> n >> p, n|p){

		vector<int> people(n);
		int stone = p;
		bool finish = false;
		for(int i=0; !finish; i++){
			i = i%n;
			if(stone != 0){
				people[i]++;
				stone--;
			}else{
				stone += people[i];
				people[i] = 0;
			}
			if(people[i] == p){
				cout << i << endl;
				finish = true;
			}
		}
	}
	return 0;
}