#include <iostream>
using namespace std;
#define MAX 100000
typedef long long llong;

int num_bag, num_trk;
llong sum_bag=0;
llong arr[MAX];

int check(llong P){
	int i = 0;
	for(int j = 0; j < num_trk; j++){
		llong s = 0;
		while(s + arr[i] <= P){
			s += arr[i];
			i++;
			if( i == num_bag ) return num_bag;
		}
	}
	return i;
}

int solve(){
	llong left = 0;
	llong right = sum_bag;
	llong mid;
	while(right - left > 1){
		mid = (right + left) /2;
		int v = check(mid);
		if(v == num_bag) right = mid;
		else left = mid;
	}
	return right;
}

int main(){
	cin >> num_bag >> num_trk;
	for(int i = 0; i < num_bag; i++){
		int bag;
		cin >> bag;
		arr[i] = bag;
		sum_bag += bag;
	}
	llong P = solve();
	cout << P << endl;
	return 0;
}

