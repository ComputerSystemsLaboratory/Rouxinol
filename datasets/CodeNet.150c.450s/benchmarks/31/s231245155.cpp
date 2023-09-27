#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 200000;

int main(void){
	int num,rating[MAX];
	
	cin >> num;

	for(int i = 0; i < num; i ++) cin >> rating[i];
	
	int maxv = -2000000000;
	int minv = rating[0];
	for(int i = 1; i < num; i ++){
		maxv = max(maxv, rating[i] - minv);
		minv = min(minv, rating[i]);
	}
	
	cout << maxv << endl;
	
	return 0;
}