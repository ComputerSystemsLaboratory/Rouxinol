#include<iostream>
int box[10];
int ltop = -1, rtop = -1;
bool ball(int i, int left, int right){
	if (i == 10)return true;
	if (left<box[i])return ball(i + 1, box[i], right);
	if (right<box[i])return ball(i + 1, left, box[i]);
	if (left>box[i] && right>box[i])return false;
}
int main(){
	int n;
	std::cin >> n;
	for (int what = 0; what<n; ++what){
		for (int i = 0; i<10; ++i){
			std::cin >> box[i];
		}
		if (ball(0, ltop, rtop))std::cout << "YES\n";
		else std::cout << "NO\n";
		ltop = -1;
		rtop = -1;
	}
}